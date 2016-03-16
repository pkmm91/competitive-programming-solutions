l = ['0','1' , '1' , '11' , '1' , '11' , '11' , '111' , '1' , '11']
def binaryfunction(num):
    s = ''
    for char in num:
        r = l[int(char)]
        s =  s + r
    return len(s)   
t = input()
for i in xrange(t):
    num = raw_input()
    print "%s"%(binaryfunction(num))
