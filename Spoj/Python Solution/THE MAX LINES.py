t = int(raw_input())
for i in xrange(t):
    num = map(float , raw_input().split())
    n = num[0]
    result = 0.25 + 4 *(n ** 2)
    print "Case %d: %0.2f"%(i+1 , result)
