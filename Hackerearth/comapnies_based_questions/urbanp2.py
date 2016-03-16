def no_of_ways(n , m):
    p = (n-m+1)
    if p <= 1:
        print fact(m)
    else:
        print (fact(m) * fact(p))
def fact(n):
    ans = 1
    for i in range(1 , n+1):
        ans *= i
    return ans
A = map(int , raw_input().split())
arr = map(int , raw_input().split())
n , l , m = A[0] , A[1] , A[2]
count = 0
for e in arr:
    if e <= l:
        count += 1
print count
no_of_ways(count , m)
