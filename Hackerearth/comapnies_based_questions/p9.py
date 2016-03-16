lst = [3,5,15]
for i in range(1,101):
    print i
for i in range(1,101):
    if i % lst[2] == 0:
        print "FizzBuzz"
    elif i % lst[1] == 0:
        print "Buzz"
    elif i %lst[0] == 0:
        print "Fizz"
