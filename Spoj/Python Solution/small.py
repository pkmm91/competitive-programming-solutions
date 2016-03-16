def small(num):
    a = 1
    for i in xrange(2 , num+1):
        a = lcm(a%m , i%m)
    return a
def lcm(a , b):
    return (a / gcd(a , b))*b
def gcd(a , b):
    if b == 0:
        return a
    else:
        return gcd(b , a%b)
m = 1000000007
for i in xrange(input()):
    num = int(raw_input())
    print small(num % m)%m
