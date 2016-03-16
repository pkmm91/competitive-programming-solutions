l = ['Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A']
def cipher(str , num):
    newstr = ""
    for i in str:
        k = l.index(i)
        r = (k+num)%26
        newstr = newstr + l[r]
    return newstr
        
t = int(raw_input())
for i in xrange(t):
    st = raw_input()
    num = int(raw_input())
    print cipher(st, num)
