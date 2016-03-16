for i in range(input()):
    input()
    k=map(int,raw_input().split())
    print"Some Mirrors Lie!"if sum([e for e in[p for p in k if k.index(p)%2!=0]if e>=0])>=sum([abs(e) for e in[q for q in k if k.index(q)%2==0]if e<0])else"Every Girl Lies!"
