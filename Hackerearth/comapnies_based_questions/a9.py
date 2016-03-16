l = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
t = input()
for i in xrange(1,t+1):
    s = raw_input()
    if(i%2 == 0):
        print "-1"
    else:
        sum = 0
        for c in s:
            sum = sum + (l.index(c)+1)
        print "%d"%(sum)
