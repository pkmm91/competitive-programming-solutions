k = True
p = 1000000009
def bankline(n):
    res = 1
    while (n > 1):
        if ( (n / p) % 2 == 0):
            res = (res * (p - 1)) % p
        else:
            res = (res * 1)% p
        for i in xrange(2 , (n%p + 1)):
            res = (res * i) % p
            n /= p
    return (res % p)
while k:
    num = int(raw_input())
    if (num == 0):
        k = False
    else:
        print "%s"%bankline(num)
    
