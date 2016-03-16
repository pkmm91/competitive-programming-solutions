n= input()
s = map(int,raw_input().split())
k = int(raw_input())
for i in range(k):
    r = map(int,raw_input().split())
    count = 0
    for value in s[r[0]:r[1]+1]:
         if value == r[2]:
             count +=1
    print count
   
