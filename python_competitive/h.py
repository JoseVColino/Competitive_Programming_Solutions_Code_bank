n = int(input())

v = list(map(int,input().split()))

maior = v[0]
dias = 1
for i in v:
    if maior < i:
        dias+=1
        maior = i

print(dias)