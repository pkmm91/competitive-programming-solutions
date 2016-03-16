def lucky_num(str1):
    lst1 = list(str1)
    lst2 = []
    for i in lst1:
        lst2.append(lst1.count(i))
    print lst2
    return list(set(lst2))
for i in range(input()):
    num = raw_input()
    print lucky_num(num)
