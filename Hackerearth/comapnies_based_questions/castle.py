import sys
t = input()
for i in xrange(t):
    n = int (raw_input())
    l = map(int , raw_input().split())
    k = True
    for i in xrange(n-1):
        if (l[i] == l[i+1]):
            k = True
            break
        else:
            k = False
    if (k):
        print "can do"
    else:
        print "bad luck"
        
            
    
