import sys 
for i in xrange(input()):
    
    x,y = map(int,sys.stdin.readline().split())
    r = ( (3*x)*(3*x) ) + (y*y)
    b =  ( 2*(x*x) ) + ( (5 * y) *(5 * y) )
    c =  ( (-1)*(100) *(x) ) + (y*y*y)
    if (r >= b and r >= c):
        print("Rafael ganhou")
    elif(b > c and b > r):
        print("Beto ganhou")
    else:
        print("Carlos ganhou")
    
    
   
