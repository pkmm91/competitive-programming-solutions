from math import factorial
def fib(n):
    return factorial(n)
for i in range(input()):
    num = int(raw_input())
    if num in [1,2,3]:
        print "0000" + str(fib(num))
    elif num in [4]:
        print "000" + str(fib(num))
    elif num in [5,6]:
        print "00" + str(fib(num))
    elif num in [7]:
        print "0" + str(fib(num))
    else:
        str1 = str(fib(num))
        print str1[len(str1)-5:]
