import os
import sys
num = int(raw_input())
count = 0
while (1):
    if (num % 2 != 0):
        print (num)
        count = count + 1
    num = num + 1
    if (count == 6):
        break
            
        
