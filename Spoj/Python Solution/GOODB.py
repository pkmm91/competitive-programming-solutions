import math
mod = 1000000007
def goodb(n , w, t , r):
    return (((math.factorial(n)/math.factorial(w))/math.factorial(t))/math.factorial(r))
s = map(int , raw_input().split())
n , w, t , r = s[0] , s[1] , s[2] , s[3]
print "%s"%(goodb(n , w , t , r)%mod)
