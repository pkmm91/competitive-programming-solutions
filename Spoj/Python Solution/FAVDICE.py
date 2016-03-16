from math import *
arr = [0 , 1]
for i in range(2 , 10001):
    arr.append(arr[-1] + 1.0/i)
t = int(raw_input())
for i in range(t):
    n = int(raw_input())
    print "%0.2lf"%(n*arr[n])
