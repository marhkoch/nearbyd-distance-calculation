import re
import sys
import statistics

SPEED_OF_LIGHT = 299792458

def unit_conversion(param):
  return param / 998400000000.0

def multiply_by_c(param):
  return param * 299792458.0

def double_sided_ranging(t_round_1, t_reply_1, t_round_2, t_reply_2):
    num = (t_round_1 * t_round_2 - t_reply_1 * t_reply_2) 
    denum = (t_round_1 + t_round_2 + t_reply_1 + t_reply_2)

    if denum == 0:
       print("Error: Division by 0")
       return
    else:
        tof = unit_conversion(num/denum)
        range = multiply_by_c(tof)
        return tof, range

if __name__ == '__main__':

    with open(sys.argv[1]) as file:
        lines = [line.rstrip() for line in file]
        timestamps = [line for line in lines if "RoseMeasurementEngine::computeRange: rtt_i" in line]
        timestamps = [re.findall("\d{9,11}", line)[:4] for line in timestamps]
        timestamps = [[int(value) for value in line] for line in timestamps]

        ranges = []

        for line in timestamps:
            tof, range = double_sided_ranging(t_round_1=line[0], t_reply_1=line[1], t_round_2=line[2], t_reply_2=line[3])
            ranges.append(range)


        print(f"Mean: {statistics.mean(ranges)}")
        print(f"Median: {statistics.median(ranges)}")
        print(f"Max: {max(ranges)}")
        print(f"Min: {min(ranges)}")
