n = int(raw_input())
a = map(int , raw_input().split())
b = map(int , raw_input().split())
la , lb = a[0],a[1]
sa , sb = b[0],b[1]
if ((n >= la and n <= lb) and (n >= sa and n <= sb)):
    print "possivel"
else:
    print "impossivel"
