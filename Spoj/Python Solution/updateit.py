def update(bit , r , v , n):
    while r <= n:
        bit[r] += v
        r += ( r & -r )
def query(bit , r , n):
    sum = 0
    while r > 0:
        sum += bit[r]
        r -= ( r & -r)
    return sum
t = int(raw_input())
for i in range(t):
    n , u = map(int , raw_input().split())   
    bit = []
    for i in range(n+1):
        bit.append(0)
    for i in range(u):
        l , r, q = map(int , raw_input().split())
        update(bit , l+1 , q , n )
        update(bit , r+2 , (-1)*q , n)
         
    qu = int(raw_input())
    for i in range(qu):
        x = int(raw_input())
        print query( bit , x+1 , n)
    
