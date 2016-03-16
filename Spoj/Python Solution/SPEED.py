
from fractions import gcd
for i in range(int(raw_input())):
	a , b = raw_input().split()
	a = int(a)
	b = int(b)
	s = abs(a - b)
	g = gcd(a , b)
	print abs(s/g)
