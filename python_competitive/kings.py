n, k = map(int,input().split())

kings = []
for i in range(n):
    x,y = map(int,input().split())
    kings.append((x,y))

a = max(kings,key=lambda x: x[0]) - min(kings,key=lambda x: x[0])
a = max(kings,key=lambda x: x[1]) - min(kings,key=lambda x: x[1])

for rei in kings:
    ...