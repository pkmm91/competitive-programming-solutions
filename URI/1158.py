import os
import sys
for i in xrange(input()):
    a,b = map(int,sys.stdin.readline().split())
    i=1
    sum=0
    while (i <= b):
        if (a % 2 != 0):
            sum = sum + a
            i = i+1
        a = a + 1
    print (sum)
            
        
