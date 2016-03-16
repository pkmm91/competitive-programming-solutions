while True:
    try:
        num = int(raw_input())
        if num == 0:
            print 0
        elif num == 1:
            print 1
        else:
            print ((num*2)-2)
    except (EOFError):
        break
    
