import sys
SPEED_OF_LIGHT = 299792458


def calc_timestamp_dec(hex_string: str):
    hex_bytes = bytes.fromhex(hex_string)
    swap_endianness = bytes(reversed(hex_bytes)).hex()
    dec = int(swap_endianness, 16)
    return dec


def single_sided_ranging(values: list):
    t_round = values[0]
    t_reply = values[1]

    res = 0.5 * (t_round - t_reply) * 10 ** -12 * SPEED_OF_LIGHT
    return res


if __name__ == '__main__':
    with open(sys.argv[1]) as file:
        lines = [line.rstrip().replace(' ', '') for line in file]
        lines = list(filter(lambda line: len(line) == 54, lines))
        lines = [[calc_timestamp_dec(line[18:26]), calc_timestamp_dec(line[34:42])] for line in lines]

        for line in lines:
            print(single_sided_ranging(line))