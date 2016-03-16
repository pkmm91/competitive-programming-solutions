from itertools import chain, combinations
def powerset(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))
mod = 1000000007
num = int(raw_input())
for i in xrange(num):
    n = raw_input()
    count = 0
    l = list(map(''.join, powerset(n)))
    for e in l[1::]:
        if int(e)%6 == 0:
            count +=1
            count = count % mod
    return count
