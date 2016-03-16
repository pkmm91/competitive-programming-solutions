for i in range(input()):
    num = int(raw_input())
    num1 = map(int,raw_input().split())
    num2 = map(int,raw_input().split())
    m1 = min(num1)
    m2 = max(num2)
    r1 = (m2 / m1)
    r2 = (m2 % m1)
    count =0
    if(r2==0):
        print r1
    else:
        while (r1 <= m1):
            count +=1
            r1 = (r1*2)
        print ((m2 / m1)+count)
            
    

        
