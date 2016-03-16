import math
def perfect_sq(n):
    return n == int(math.sqrt(n)) * int(math.sqrt(n))
mod = 1000000007
for i in xrange(10):
   t= int(raw_input())
   count = 0
   for i in xrange( 10**t): 
       prod = 1
       for j in (str(i)):
           prod = prod * int(j)
       if(perfect_sq(prod % mod)):
           count = count +1
   print count
        
