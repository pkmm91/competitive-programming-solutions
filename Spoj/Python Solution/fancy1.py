while True:
    num = int(raw_input())
    if num == 0:
        break
    else:
        result = (((num ** 2) * 113) / (2.0 * 355 ) )
        print "%0.2f"%(result)
    
