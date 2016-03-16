import sys
t = input()
for i in xrange(t):
     d1 , d2 = map(str,sys.stdin.readline().split())
     print d1.split(':')
     print d2.split(':')
