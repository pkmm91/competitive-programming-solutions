t = input()
assert(1 <= t <= 1000000)
for i in range(t):
    n = map(int,raw_input().rstrip().split())
    x = n[0]
    y = n[1]
    N = n[1]
    result = []
    for i in xrange(x):
        result.append(y)
    for j in xrange(x, N): 
        result.append(0)
    print result
        
        
        
    
            
        
