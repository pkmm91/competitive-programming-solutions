import os
import sys
for i in xrange(input()):
    n = int(raw_input())
    a = map(int,raw_input().split())
    k = list(set(a))
    print (len(k) )
            
        
