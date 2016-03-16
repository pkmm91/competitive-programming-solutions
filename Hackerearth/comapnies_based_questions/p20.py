import math
for i in range(input()):
    a,b = raw_input().split()
    c = int(a)
    d = int(b)
    lst = [0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4, 5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9]
    print lst[((c % 10) << 2) + (d&3)]

        
