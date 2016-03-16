def vfact(n):
    str1 = str(fact(int(n)))
    count = 0
    for char in str1:
        if char == '4' or char == '7':
            count+=1
    return count
    
def fact(n):
    if n < 2:
        return 1
    return mid_prod(1,n)
def mid_prod(l,h):
    if l+1 < h:
        mid = (h+l)//2
        return mid_prod(l,mid)*mid_prod(mid+1,h)
    if l == h:
        return l
    return l*h
for i in range(input()):
    n = raw_input()
    print vfact(n)

