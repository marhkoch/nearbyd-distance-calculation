import sys
import statistics
import binascii
SPEED_OF_LIGHT = 299792458

def unit_conversion(param):
  return param / 998400000000.0

def multiply_by_c(param):
  return param * 299792458.0

def single_sided_ranging(t_round, t_reply):
    tof = unit_conversion(0.5 * (t_round - t_reply))
    range = multiply_by_c(tof)
    return tof, range

def extract_timestamps(hex_str):
    bytes_data = binascii.unhexlify(hex_str.replace(" ", ""))
    t_round_bytes = bytes_data[9:13][::-1]
    t_reply_bytes = bytes_data[17:21][::-1]
    t_round_hex = binascii.hexlify(t_round_bytes).decode('utf-8')
    t_reply_hex = binascii.hexlify(t_reply_bytes).decode('utf-8')
    t_round = int(t_round_hex, 16)
    t_reply = int(t_reply_hex, 16)
    return [t_round, t_reply]

if __name__ == '__main__':

    with open(sys.argv[1]) as file:
        lines = [line.rstrip() for line in file]
        lines = list(filter(lambda x: ("91 15 24" in x), lines))
        timestamps = [extract_timestamps(line) for line in lines]
        timestamps = list(filter(lambda values: values != [0, 0], timestamps))

        ranges = []

        for values in timestamps:
            t_round = values[0]
            t_reply = values[1]
            tof, range = single_sided_ranging(t_round=t_round, t_reply=t_reply)
            ranges.append(range)

        print(f"Mean: {statistics.mean(ranges)}")
        print(f"Median: {statistics.median(ranges)}")
        print(f"Max: {max(ranges)}")
        print(f"Min: {min(ranges)}")