from collections import *
def bfs(G, source):
    dist = [-1] * len(G)
    dist[source] = 0
    intree = [False] * len(G)
    
    while True:
        minw = float("inf")
        minind = -1
        for i in xrange(len(G)):
            if intree[i] == False and 0 <= dist[i] < minw:
                minw = dist[i]
                minind = i
        if minind == -1:
            break
        intree[minind] = True
        for n, d in G[minind].iteritems():
            if intree[n]: continue
            newdist = minw + d
            if dist[n] == -1 or dist[n] > newdist:
                dist[n] = newdist           
    return dist
n , m = map(int , raw_input().split())
d = {i : {} for i in range(n)}
for i in range(m):
    arr = raw_input().split()
    if arr[0] == '1':
    	#final = int(arr[1]) -1
        l = bfs(d  , 0 )
        #print l[final]
        print l
    else:
        v1 , v2 = int(arr[1]) , int(arr[2])
        d[v1-1][v2-1] = 1
        #d[v2-1].add(v1-1)
    

