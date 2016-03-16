import string
def is_pangram(s):
     return not set('abcdefghijklmnopqrstuvwxyz') - set(s.lower())
for i in range(input()):
    s = raw_input()
    k =  is_pangram(s)
    if k:
        print "YES"
    else:
        print "NO"
