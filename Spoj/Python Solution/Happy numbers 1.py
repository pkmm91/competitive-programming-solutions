def happy(n):
    past = set()			
    while n != 1:
        n = sum(int(i)**2 for i in str(n))
        if n in past:
            return (-1)
        past.add(n)
    return len(past)
t = int(raw_input())
print happy(t)
