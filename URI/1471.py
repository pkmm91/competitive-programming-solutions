import sys
import os
while True:
    try:
        n,m = map(int,sys.stdin.readline().split())
        l1 = []
        for i in xrange(1,n+1):
            l1.append(i)
        r = map(int, raw_input().split())
        l2 = [val for val in l1 if val  not in r]
        l2.sort()
        if (len(l2) == 0):
            print "* "
        else:
           s = ''
           for i in l2:
               s = s + str(i) + " "
           print s
    except:
        break
        
        
