for i in range(int(input())):
    n = float(input())
    print "%0.3lf"%(n- (n**3)/6 + (n**5)/120 - (n**7)/5040 + (n**9)/362880)
    print "%0.3lf"%(1- (n**2)/2 + (n**4)/24 - (n**6)/720 + (n**8)/40320)
