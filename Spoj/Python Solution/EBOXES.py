for _ in range(int(raw_input())):
    n, k, t, f = map(int, raw_input().split())
    print f + (f-n)/(k-1)
