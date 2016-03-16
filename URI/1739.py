def prefib(n):
    a , b = 1 , 1
    if n == 1:
        return  a
    for i in xrange(3 , n+1):
        c = a + b
        a = b
        b = c
    if ('3' in str(b)) or summation(b)%3 == 0:
        return b
    else:
        return prefib(n+1)
def summation(n):
    sum = 0
    while n > 0:
        r = n % 10
        sum = sum + r
        n = n / 10
    return sum
l = []
for i in xrange(1 , 61):
    l.append(prefib(i))
print l
    
    
