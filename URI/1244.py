from itertools import groupby
def keyfunc(x):
    return len(x)
t = int(raw_input())
for i in xrange(t):
    str = raw_input()
    k = str.split( )
    s = sorted(k , key = len )
    uniquekeys = []
    for k, g in groupby(s, keyfunc):
        uniquekeys.append(k)
    new_str = ""
    for i in uniquekeys[::-1]:
       for j in s:
           if (len(j) == i):
               new_str = new_str + j + " "
    print (new_str)
