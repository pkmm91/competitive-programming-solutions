t = input()
for i in xrange(t):
    num = int(raw_input())
    sum = 0
    for i in xrange(num):
        str = raw_input()
        for j in xrange(len(str)):
            sum = sum + (ord(str[j])-65) + j + i
    print sum
            
