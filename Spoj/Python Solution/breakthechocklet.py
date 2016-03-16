from math import log, ceil
ct = input()
i = 1
while ct:
    ct -= 1
    a, b, c = map(int, raw_input().split())
    t = a * b * c
    x = ceil(log(a, 2)) + ceil(log(b, 2)) + ceil(log(c, 2))
    print "Case #%d: %d %d" % (i, t - 1, int(x))
    i += 1
