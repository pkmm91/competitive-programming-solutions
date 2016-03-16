import math
for i in xrange(int(raw_input())):
    num = int(raw_input())
    result = int(math.sqrt(num + 1) - 1)
    print "Case %d: %d"%(i+1, result)
    
