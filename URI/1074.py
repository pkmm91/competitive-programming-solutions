for i in range(input()):
    num = int(raw_input())
    if num == 0:
        print "NULL"
    elif num > 0:
        if num % 2==0:
            print "EVEN POSITIVE"
        else:
            print "ODD NEGATIVE"
    else:
        if num % 2==0:
            
            print "EVEN NEGATIVE"
        else:
            
            print "ODD NEGATIVE"
