from math import *
t = int(raw_input())
for i in range(t):
    s = raw_input().split('e')
    r , corn , h = float(s[0]) , float(s[1]) , float(s[2])
    A = 3.1415 * r * ( ( (r)**2  + (h)**2)**0.5 )
    print int(ceil(A*corn))
