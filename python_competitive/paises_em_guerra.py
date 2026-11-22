#https://judge.beecrowd.com/pt/problems/view/1148
import heapq

n = 1
e = 1

while(1):
    n, e = map(int,input().split())
    if n == 0 and e == 0:
        break
    grafo = [{} for i in range(n)]
    edges = set()
    for i in range(e):
        x, y, h = map(int, input().split())
        edges.add((x-1,y-1))
        if (y-1,x-1) in edges:
            h = 0
            grafo[y-1][x-1] = 0
        grafo[x-1].update([(y-1,h)])

    k = int(input())
    while(k > 0):
        k -= 1
        o, d = map(int, input().split())
        o -= 1
        d -= 1
        dist = [10**13 for _ in range(n)]
        dist[o] = 0
        fila = []
        heapq.heappush(fila, o)
        while(fila):
            u = heapq.heappop(fila)
            for v,w in grafo[u].items():
                if dist[v] > dist[u] + w:
                    dist[v] = dist[u] + w
                    heapq.heappush(fila, v)

        print('Nao e possivel entregar a carta' if dist[d] == 10**13 else dist[d])
    print()