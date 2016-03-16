import sys
import os
for i in xrange(input()):
    n,m = map(str,sys.stdin.readline().split())
    l1 = len(n)
    l2 = len(m)
    if (l2 > l1):
        print ("nao encaixa")
    else:
        if (n[l1-l2:] == m):
            print ("encaixa")
        else:
            print ("nao encaixa")
