l1=[]
l2=[]
t = input()
k=map(int,raw_input().split())
for i in xrange(t):
    a,b = raw_input().split();
    l1.append(int(a))
    l2.append(int(b))
q = input()
for i in xrange(q):
    x,y,z =raw_input().split()
    if x=='1':
       k.pop(int(y)-1)
       k.insert(int(y)-1,int(z))
    else:
        lst=[]
        for i in xrange(t):
            j = 0
            while j <t:
                sum = 0
                for i in xrange(l1[j]-1,l2[j]):
                    sum +=k[i]
                lst.append(sum)
                j +=1                   
        total = 0
        for i in xrange(int(y)-1,int(z)):
            total +=lst[i]
        print total




