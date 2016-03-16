import sys
t = input()
for i in xrange(t):
    n = int (raw_input())
    l = map(int , raw_input().split())
    k = False
    for i in xrange(n-1):
        if (l[i] == l[i+1]):
            k = False
        else:
            k = True
    if (k == False):
        print "bad luck"
    else:
        print "can do"
        
            
    
