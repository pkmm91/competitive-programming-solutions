a , b = map(int , raw_input().split())
if a % 2 != 0 and b % 2 != 0:
    ta = ((a-1)//2) + 1
    tb = ((b-1)//2) + 1
    print tb**2 - ta**2 + a
if a % 2 != 0 and b % 2 == 0:
    b = b-1
    ta = ((a-1)//2) + 1
    tb = ((b-1)//2) + 1
    print tb**2 - ta**2 + a
if a % 2 == 0 and b % 2 != 0:
    a = a+1
    ta = ((a-1)//2) + 1
    tb = ((b-1)//2) + 1
    print tb**2 - ta**2 + a
if a % 2 == 0 and b % 2 == 0:
    a = a + 1
    b = b - 1
    ta = ((a-1)//2) + 1
    tb = ((b-1)//2) + 1
    print tb**2 - ta**2 + a
    
