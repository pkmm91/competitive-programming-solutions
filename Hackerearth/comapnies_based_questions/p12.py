def fib2(n): 
    result = []
    a, b = 0, 1
    while b < n:
        result.append(b)
        a, b = b, a+b
    return result
for i in range(input()):
    num = int(raw_input())
    k = fib2(num+1)
    if num == 0:
        index = 1
        print "Y 1" 
    elif  num == 1:
        print "Y 2 3"
    elif (num !=1) and (num in k):
        print "Y %d"%(k.index(num) +2)
    else:
        print "N NOT PRESENT"

