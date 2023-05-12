
def unit_conversion(param):
  return param / 998400000000.0

def multiply_by_c(param):
  return param * 299792458.0

def computeRange(t_round_1, t_round_2, t_reply_1, t_reply_2):

  num = t_round_1 * t_round_2 - t_reply_1 * t_reply_2
  denum = t_reply_2 + t_round_2 + t_round_1 + t_reply_1

  if denum == 0:
       print("Error: Division by 0")
       return
  else:
       tof = unit_conversion(num/denum)
       range = multiply_by_c(tof)
