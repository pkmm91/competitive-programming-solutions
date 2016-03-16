test = int(raw_input())
for i in range(test):
    value = raw_input()
    if value == value[::-1]:
        print "YES"
    else:
        print "NO"
