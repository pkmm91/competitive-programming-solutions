import math
t = int(raw_input())
result = 0
for i in xrange(1 , int(math.sqrt(t))+1):
    result += (t/i - i + 1)
print result
    
