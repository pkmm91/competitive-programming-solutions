import sys    
n,m = map(int,sys.stdin.readline().split())
s = raw_input()
for i in range(m):
    a,b,c = map(int,sys.stdin.readline().split())
    if a==1:
        s = s[:b-1] + str(c)+s[b:]
    else:
      k = s[b-1:c]
      ss_cnt=[]
      cnt=0  
      (ss0,ss1,ss2)=(0,0,0)
      for c in k:
        r=int(c)%3
        if r==0:
           ss0+=1
        elif r==1:
           (ss0,ss1,ss2)=(ss2,ss0,ss1)
           ss1+=1
        elif r==2:
           (ss0,ss1,ss2)=(ss1,ss2,ss0)
           ss2+=1
        cnt+=ss0
      print cnt
            
