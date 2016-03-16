for i in xrange(1 , input()+1):
    s = map(str , raw_input().split())
    index = int(s[0])-1
    word = s[1]
    print "%d %s"%(i , (word[:index]+word[index+1:]))
    
