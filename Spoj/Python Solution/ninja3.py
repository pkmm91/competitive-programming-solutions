from fractions import gcd
t = int(raw_input())
for i in range(t):
    n , a , b = [x for x in raw_input().split()]
    g = gcd(int(a) , int(b))
    print n*g
