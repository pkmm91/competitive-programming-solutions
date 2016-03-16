def hamdist(str1, str2,prevMin=None):
    diffs = 0
    if len(str1) != len(str2):
         return max(len(str1),len(str2))
    for ch1, ch2 in zip(str1, str2):
         if ch1 != ch2:
              diffs += 1
              if prevMin is not None and diffs>prevMin:
                     return None
    return diffs
for i in range(input()):
    a,b = map(int,raw_input().split())
    c,d  = bin(a),bin(b)
    print hamdist(c[2:],d[2:])
    
