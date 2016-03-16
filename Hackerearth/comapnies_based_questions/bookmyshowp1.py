def condition(l1 , l2 , m , n):
    i , j = 0 , 0
    while(i < m and j < n):
        if(l1[j] < l2[i]):
            j +=1
        elif(l1[j] == l2[j]):
            j += 1
            i += 1
        elif(l1[j] > l2[i]):
            return 0
    if (i < n):
        return 0
    else:
        return 1

m = int(raw_input())
marry = map(int , raw_input().split())
marry = sorted(marry)
n = int(raw_input())
count = 0
for i in range(n):
    narray = map(int , raw_input().split())
    if(condition(marry , sorted(narray) , m , len(narray))):
        count +=1
print count
