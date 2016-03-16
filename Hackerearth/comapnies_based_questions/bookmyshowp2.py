m = int(raw_input())
for i in range(m):
    arr = map(int , raw_input().split())
    n , m = arr[0] , arr[1]
    l = []
    for p in range(n):
        l1 = []
        for d in range(m):
            price = 1000
            disc = map(int , raw_input().split())
            i = 0
            while(i < 3):
                d = (price * disc[i])/100
                price = price - d
                i += 1 
            l1.append(price)
        l.append(l1.index(min(l1)))
    print l

            
                
            
	
