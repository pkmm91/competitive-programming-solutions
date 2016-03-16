for i in xrange(int(raw_input())):
    a , b = map(int , raw_input().split())
    if a != b and (a-b) != 2:
        print "No Number"
    else:
        if a% 2 == 0 and b % 2 == 0:
            print a+b
        else:
            print abs(a + b - 1)
