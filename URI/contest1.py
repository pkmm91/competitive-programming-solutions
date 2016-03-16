import os
def isqrt(n):
    xn = 1
    xn1 = (xn + (n/xn))/2
    while abs(xn1 - xn) > 1:
        xn = xn1
        xn1 = (xn + n/xn)/2
    while xn1*xn1 > n:
        xn1 -= 1
    return xn1
        
t = int(raw_input())
for i in xrange(1 , t+1):
    num = int(raw_input())
    k = isqrt(num)
    if (k*k == num):
        print "%d"%(num)
    else:
        for i in xrange(2 , num+1):
            new_num = num * i
            s = isqrt(new_num)
            if( s * s == new_num):
                break
        print "%d"%(new_num)
             
    
