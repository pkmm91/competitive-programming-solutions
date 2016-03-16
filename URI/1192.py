import sys
import os
for i in range(input()):
    s = raw_input()
    if (s[0] == s[2]):
        print (int(s[0])* int(s[2]))
    elif (s.isupper()):
        print (int(s[2]) - int(s[0]))
    else:
        print (int(s[2]) + int(s[0]))
        
