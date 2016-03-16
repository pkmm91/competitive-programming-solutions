import sys
def gcd(a , b):
    while b:
        r = a % b
        a = b
        b = r
    return a
def common_divisor(n,k):
    count = 0
    factors = [1 , n]
    for i in xrange(2 , int(n / 2)+ 1):
        if n % i == 0:
           factors . append (i)
    for i in xrange(len(factors)):
        if gcd(factors[i] , k) == factors[i]:
            count += 1
    return count
    
for i in xrange(int(raw_input())):
    n,k = map(int , sys.stdin.readline().split())
    print "%s"%(common_divisor(n , k))
