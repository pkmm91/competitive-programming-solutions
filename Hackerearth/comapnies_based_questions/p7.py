def list_powerset2(lst):
    return reduce(lambda result, x: result + [subset + [x] for subset in result],
                 lst, [[]])
lst1 = []
for i in range(input()):
    n = int(raw_input())
    k =  [map(int, raw_input().split())
    lst1.append(k)
    print lst1 
    print list_powerset2(lst1)
