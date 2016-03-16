def pascal(n):
   line = [1]
   for k in range(n):
     line.append(line[k] *(n-k)/(k+1))
   return (sum(line)%1000)
for i in range(input()):
    num = input()
    k =  pascal(num-1)
    print k
