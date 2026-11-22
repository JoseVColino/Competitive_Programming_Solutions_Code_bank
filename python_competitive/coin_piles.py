t = int(input())

for _ in range(t):
    a,b = map(int,input().split())
    if ((a+b) % 3 != 0): 
        print('NO'); 
        continue
    if max(a,b) <= 2*min(a,b):
        print('YES')
    else:
        print('NO')