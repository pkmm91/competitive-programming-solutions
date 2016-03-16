for i in xrange(input()):
    str = raw_input().split()
    m , n = str[0] , str[1]
    for i in xrange(len(n)):
        if (n[i:i+2] == "**"):
            k = (int(i) ** int(i+3)) % int(m)
        else:
            if (n[i] == "*" and n[i+1] != "*")
            r = (int(i) * int(i+2)) % int(m)
    print k
            
        


        
