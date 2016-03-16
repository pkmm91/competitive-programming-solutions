def cake(str):
    a = []
    k = list(set(str))
    for i in k:
        a.append(str.count(i, 0, len(str)))
    return a
for i in xrange(input()):
    str = raw_input()
    s = cake(str)
    s.sort()
    for i in s:
        sum = 0
        for j in xrange(len(s)):
            sum = sum + s[j]
        k = sum - i
    if (k == i):
        print "YES"
    else:
        print "NO"
    
    



        
