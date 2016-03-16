def GCD(a,b):
    a = abs(a)
    b = abs(b)
    while a:
        a, b = b%a, a
    return b        
def GCD_List(list):
    return reduce(GCD, list)
for i in range(input()):
    n = map(int, raw_input().split())
    m = map(int, raw_input().split())
    for i in range(n[1]):
        q = map(int, raw_input().split())
        a = q[0]-1
        b = q[1]-1
        newlist = m[:a] + m[b+1:]
        result = GCD_List(newlist)
        print result





        
