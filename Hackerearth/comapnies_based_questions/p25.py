def substr(string):
    j=1
    a=[]
    while True:
        for i in range(len(string)-j+1):
            a.append(string[i:i+j])
        if j==len(string):
            break
        j+=1
    return a
for i in range(input()):
    m,n = raw_input().split()
    str1 = raw_input()
    a = substr(str1.upper())
    count1 =0
    count2 =0
    for i in xrange(len(a)):
            if (a[i].count('R')==int(m)):
                count1 +=1
            if (a[i].count('K')==int(n)):
                count2 +=1
        
    print count1,count2
    
