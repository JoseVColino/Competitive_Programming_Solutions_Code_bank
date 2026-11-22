n = int(input())

v = list(map(int,input().split()))

if 9 not in set(v):
    print(-1)
    exit()
    
print(min(list(v)))   
