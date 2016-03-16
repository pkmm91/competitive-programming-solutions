from math import sqrt
def factors(n):  
    fact=[1,n]  
    check=2  
    rootn=sqrt(n)  
    while check<rootn:  
        if n%check==0:  
            fact.append(check)  
            fact.append(n/check)  
        check+=1  
    if rootn==check:  
        fact.append(check)  
        fact.sort()  
    return len(set(fact))
t = int(raw_input())
assert(1 <= t <= 100000)
for i in xrange(t):
    n = map(long , raw_input().split())
    l = n[0]
    assert(1 <= l <= 1000000000000000000 )
    r = n[1]
    assert(1 <= r <= 1000000000000000000 )
    count = 0
    for j in xrange(l , r+1):
        if (factors(j)% 2) != 0:
            count = count + 1
    print count
