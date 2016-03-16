phi = (1 + 5**0.5) / 2
def fib(n):
    return int(round((phi**n - (1-phi)**n) / 5**0.5))
t = int(raw_input())
for i in xrange(t):
    num = int(raw_input())
    print ("Fib(%d) = %s"%(num, str(fib(num))))
