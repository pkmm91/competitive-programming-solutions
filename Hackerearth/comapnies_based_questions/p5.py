t = input()
A1 = []
A2 = []
m = 1000000007
for i in range(t):
    A = raw_input()
    B = raw_input()
    A1 = sum(int(c) * (2 ** i) for i, c in enumerate(A[::-1]))
    B1 = sum(int(c) * (2 ** i) for i, c in enumerate(B[::-1]))
    total = A1 + B1
    newnum =  bin(total)[2:]
    print newnum
    print int(newnum, 2)%m
