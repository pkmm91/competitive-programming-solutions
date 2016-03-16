for i in range(input()):
    n , p = map(int , raw_input().split())
    k = n/p
    sum = (n%p)+1
    while k > 0:
        sum *= ((k%p) + 1)
        k = k//p
    print (n - sum) + 1
