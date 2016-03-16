t = int(raw_input())
assert(1 <= t <= 10)
for i in xrange(t):
    n = int(raw_input())
    s = raw_input()
    assert(1 <= n <= 1000000)
    print set(sorted([s[a:b] for a in range(n+1) for b in range(a+1,n+2)]))
    print len(set(sorted([s[a:b] for a in range(n+1) for b in range(a+1,n+2)]))) - n - 1
   
