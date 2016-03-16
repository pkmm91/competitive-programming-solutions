import sys
t = int(raw_input())
for i in xrange(t):
    m,n = map(int,sys.stdin.readline().split())
    s = [0]
    power = [0]
    for i in xrange(1,10):
        power.insert(i,power[i-1] * 5)
        s.insert(i,s[i-1] + power[i])
    k , l = str(m) , str(n)
    length1 = len(str(m))
    length2 = len(str(n))
    n1 = s[length1-1]
    n2 = s[length2-1]
    for j in xrange(length1):
        n1 = n1 + (int(k[j]) / 2 * power[length1-j-1])
        print n1
    for j in xrange(length2):
        n2 = n2 + (int(l[j]) / 2 * power[length2-j-1])
        print n2
   

