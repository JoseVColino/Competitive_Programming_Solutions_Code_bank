# https://judge.beecrowd.com/pt/problems/view/2444

V, N = map(int, input().split())

volumes = map(int, input().split())

for d in volumes:
    if V+d > 100:
        V = 100
    elif V+d < 0:
        V = 0
    else:
        V += d

print(V)