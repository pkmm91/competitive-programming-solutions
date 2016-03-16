t = input()
total = 0
count = 0
for x in range(t):
    num = float(raw_input());
    total = total + num
    fruit = raw_input()
    words = fruit.split()
    k = len(words)
    count = count + k
    print "day %d: %d kg"%(x+1,k)
day = float((1.0*count)/t)
print "%0.2f kg by day"%(day)
print "R$ %0.2f by day"%(total/t)
