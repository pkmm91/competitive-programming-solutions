for i in range(input()):
    M = int(raw_input())
    P = float(raw_input())
    lst1 = [1,3,5,7,8,10,12]
    lst2 = [2]
    #lst3 = [4,6,9,11]
    if M in lst1:
        days =  31*P
        loss = (days*3*2500)
        print int(days)
        print int(loss)
    elif M in lst2:
        days =  28*P
        loss = (days*3*2500)
        print int(days)
        print int(loss)
    else:
        days = 30*P
        loss = (days*3*2500)
        print int(days)
        print int(loss)
    
