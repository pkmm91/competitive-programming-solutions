re = [0 , 1 , 3]
for i in xrange(3 , 10**9+1):
    re.append(re[i-1] + i)
a = map(int , raw_input().split())
l , m = a[0] , a[1]
print (re[m] - re[l])
