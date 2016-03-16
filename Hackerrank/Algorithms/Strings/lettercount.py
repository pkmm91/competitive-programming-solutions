import collections
import operator
for i in xrange(input()):
    num = map(int , raw_input().split())
    letters = collections.Counter(raw_input())
    r = dict(letters)
    k = sorted(r.items(), key= lambda item: (-item[1] , item[0]))
    l = [x for x , y in k  if y > num[1]]
    print "".join(l)
   

