#def cipher(lst):
  #    return "".join(chr(255-x) for x in lst[0])
lst = []
#str1 = ""
for i in range(input()):
    n =  int(raw_input())
    k = map(int, raw_input().split())
    lst.append(k)
    print lst
