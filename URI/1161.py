import os
import sys
def  factorial(num):
    if  num in [0,1]:
        return 1
    return num*factorial(num-1)
while (1):
    try:
        n,m = map(int,sys.stdin.readline().split())
        print (factorial(n) + factorial(m))
    except EOFError:
        break
    
