sub = 'machula'
for i in range(input()):
    str = raw_input()
    a = str.split()
    if sub in a[0]:
        r = int(a[4]) - int(a[2])
        print "%d + %d = %d"%(r , int(a[2]) , int(a[4]))
    if sub in a[2]:
        r = int(a[4]) - int(a[0])
        print "%d + %d = %d"%(int(a[0]), r , int(a[4]))
    if sub in a[4]:
        r = int(a[0]) + int(a[2])
        print "%d + %d = %d"%(int(a[0]), int(a[2]) , r)
    

    
    
