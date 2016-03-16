import math
n = int(raw_input())
num = (n*(n-1) )/2
k = int(math.sqrt(num))
while 1:
    if (k*(k-1)) == num :
        print k
        break
    else:
        k = k+1
