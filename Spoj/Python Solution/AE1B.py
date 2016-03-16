n , k , s = map(int , raw_input().split())
arr =  map(int , raw_input().split())
arr = sorted(arr, reverse = True)
screw = k*s
count = 0
sum = 0
for e in arr:
	sum += e
	count += 1
	if sum >= screw:
		break
	
print count
	
