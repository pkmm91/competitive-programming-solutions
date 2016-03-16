def findindex(s):
  for i in range(len(s)):
    if s[i]!=s[-(i+1)]:
        if s[i]!=s[-(i+2)]:
            return i+1
        else:
            return len(s)-i
for i in range(input()):
    s= raw_input()
    if s ==s[::-1]:
        print "YES"
    else:
        k = findindex(s)
        new_str = s[:k-1]+s[k:]
        if new_str == new_str[::-1]:
            print "YES"
        else:
            print "NO"
