import sys
t = input()
for i in xrange(t):
    n,m = map(str,sys.stdin.readline().split())
    l = len(m)
    for i in xrange(len(n)):
        k = n[i:i+l]
        if(len(k)== l):
            prod = (int(k) * int(m))
            print (prod)
            
            
    
