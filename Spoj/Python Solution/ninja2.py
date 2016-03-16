t = int(raw_input())
for i in range(t):
    n = int(raw_input())
    if n % 4 == 0:
        print (n/-2) , (n / -2)
    elif n % 4 == 1:
        print (n/2)+1 , ((n-1)/-2)
    elif n % 4 == 2:
        print (n-1)/2 + 1 , (n+2)/2
    else:
        print (n+1)/-2 , (n+1)/2
