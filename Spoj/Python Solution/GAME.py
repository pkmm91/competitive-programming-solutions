def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
t = int(raw_input())
for i in xrange(t):
    n = raw_input()
    count = 0;
    for c in n:
        if c == '.': break
        else:
           count = count+1
    str1 , str2 = n[:count] , n[count+1:]
    l = len(str2)
    mathpow = (10**l)
    number = int(str1+str2)
    print "%d"%(mathpow/gcd(number,mathpow))
        
        
