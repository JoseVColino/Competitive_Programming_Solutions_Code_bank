t = int(input())

for _ in range(t):
    a,b,c = map(int,input().split())

    if c == b+1 == a+2:
        print('YES')
    else:
        print('NO')