import sys
while(1):
    try:
        n,m=map(int,sys.stdin.readline().split())
        result = abs(n-m)
        print result
    except EOFError:
        break
