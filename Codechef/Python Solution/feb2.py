import sys
from operator import mul
from functools import reduce
def digits(x):
    return [int(c) for c in str(x)]
def mul_table(xs , ys):
    return [[x*y for x in xs] for y in ys]
def pmul(xs , ys):
    return map(lambda *vs: sum(filter(None,vs)),*[[0]*i + zs for i,zs in enumerate(mul_table(xs, ys))])
def mult(x , y):
    result = 0
    for v in pmul(digits(x) , digits(y)):
        result = result * 10 + v
    return result
def fact(i):
    return reduce(mul , xrange(1 , i + 1),1)
m,n = [int(u) for u in raw_input().strip().split()]
l = map(int , raw_input().strip().split())
psum = 0
fsum = 0
s = []
for element in l:
    for i in xrange(1,element+1):
        psum =(fact(i) + element)
        fsum =  fsum + mult(i , psum)
        s.append(fsum)
print s

