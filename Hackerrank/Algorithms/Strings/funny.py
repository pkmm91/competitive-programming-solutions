for i in range(input()):
    s = raw_input()
    r = s[::-1]
    l = len(s)
    res = False
    i = 1
    while i < l:
        if abs(ord(s[i]) - ord(s[i-1] )) == abs(ord(r[i]) - ord(r[i-1] )):
            res = True
        else:
            res = False
            break
        i += 1
    if (res):
        print "Funny"
    else:
        print "Not Funny"
