import sys
from itertools import permutations
def seandiv(str,num,n1):
    numbers =[''.join(p) for p in permutations(str)]
    l = len(numbers)
    lst = []
    sum = 0
    for i in numbers:
        for j in xrange(num):
            sum += (int(i)%n1[j])
        lst.append((sum,i))
        sum = 0
    return lst
    
for i in xrange(input()):
    a = raw_input()
    n = int(raw_input())
    n1 = map(int,sys.stdin.readline().split())
    k = seandiv(a,n,n1)
    k.sort()
    s = max( min(k) )
    print s
