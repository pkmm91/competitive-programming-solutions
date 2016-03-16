n = map(int,  raw_input().split())
a , b = n[0] , n[1]
s = ""
for i in xrange(b-1):
    s = s + str(a * (10 ** i)) + " "
print s + str(a * (10 ** (b-1)))
