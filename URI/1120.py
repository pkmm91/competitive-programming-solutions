import sys
import os
k = True
while True:
    n,m = map(str,sys.stdin.readline().split())
    if (n == '0' and m == '0'): break
    else:
        s = "0" 
        l = list(m)
        for i in xrange(len(l)):
            if (l[i] == n):
                continue
            else:
                s = s + l[i]
        print int(s)
     
        
        
    
