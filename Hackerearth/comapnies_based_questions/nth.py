import sys
import os
from random import *
def split(a):
    pivot = randrange(0,len(a))
    a[0],a[pivot] = a[pivot],a[0]
    last = 1;
    for i in range(1,len(a)):
        if (a[i] <= a[0]):
            a[last],a[i] = a[i],a[last]
            last = last + 1
    a[last-1],a[0] = a[0],a[last-1]
    return last - 1
def sortKth(a , p ,first =0):
    if (len(a) <= 1):
        return 
    mid = split(a)
    if (n < first + mid):
        sortKth(a[0:mid],n,first)
    elif (n  > first + mid):
        sortKth(a[mid+1:],n,first+mid+1)
def Kth(a , p):
    sortKth(a , p)
    return a[p]
t = int(raw_input())
for i in xrange(t):
    n,k,p = map(int,sys.stdin.readline().split())
    s = []
    for i in xrange(1,n+1):
        s.append(i)
    l = map(int,raw_input().strip().split())
    for i in xrange(k):
        s.remove(l[i])
    k = p-1
    if len(s) < 1 or k > len(s)-1:
        print "-1"
    else:
        print Kth(s,k)
