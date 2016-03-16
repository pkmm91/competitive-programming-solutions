import sys
import os
while(1):
     n,m = map(str,sys.stdin.readline().split())
     if (n == '0' and m == '0'):
         break;
     else:
        l1 = list(n[::-1])
        l2 = list(m[::-1])
        print l1,l2
     
