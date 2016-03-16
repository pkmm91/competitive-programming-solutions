import calendar
for i in range(input()):
    n = input()
    print n&31,calendar.month_name[n>>5&15],n>>9
