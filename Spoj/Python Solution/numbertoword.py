def f(n):
    if n == 0:
        return "zero"
    c = 0
    s = ""
    while n >0:
        if n %1000 !=0 :
            s = f1(n%1000) + b[c] + " " + s
        n/=1000
        c+=1
    return s
def f1(n):
    s = ""
    if n >=100:
        s += d[n/100 -1] +" " + "hundred" +" "
        n %=100
    if n >= 11 and  n <=19:
        return s + a[n -11] + " " 
    elif n == 10 or n >=20:
        s +=t[n/10 -1] + " "
        n %=10
    if n >=1 and n <=9:
        s +=d[n-1] + " "
    return s
d = ["one","two","three","four","five","six","seven","eight","nine"]
a =  ["eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"]
t =  ["ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"]
b = [" ","thousand"]
print f(input())
