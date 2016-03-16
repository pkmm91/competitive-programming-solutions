from operator import *
t = int(raw_input())
for i in range(t):
    size = int(raw_input())
    coins = map(int , raw_input().split())
    answer = reduce(xor , (i for i, c in enumerate(coins, 1) if c%2), 0)
    if answer == 0:
        print "Hanks Wins"
    else:
        print "Tom Wins"
