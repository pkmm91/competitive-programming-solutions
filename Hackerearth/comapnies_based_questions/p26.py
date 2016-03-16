for i in range(input()):
    lst = map(float,raw_input().split())
    result =1
    for i in range(len(lst)-1):
        result *=lst[i]
    print "{:.3f}".format(result/(len(lst)-1))

    
