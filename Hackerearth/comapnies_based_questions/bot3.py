def findcol(arr , pid):
    row , col = 6 , 7
    for i in range(row , -1 , -1):
        for j in range(col , -1 , -1):
            if arr[i][j] == 0:
                continue
            else:
                arr[i][j] == abs(pid-1):
                    if arr[i-1][j] == 0:
                        
arr = []
for i in range(7):
    arr.append(map(int , raw_input().split()))
pid = int(raw_input())

print findcol(arr , pid)
