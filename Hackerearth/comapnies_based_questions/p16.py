import fractions
def findpizza(n):
    lst = []
    while n > 0:
        for i in range(1,n):
            k = fractions.Fraction(i,n).limit_denominator(max_denominator = 10000)
            lst.append(k)
        n -=1
    return len(list(set(lst)))

for i in range(input()):
    n = int(raw_input())
    print findpizza(n)

