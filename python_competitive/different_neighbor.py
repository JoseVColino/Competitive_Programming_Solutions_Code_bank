n= int(input())

v = list(map(int,input().split()))

pre_suf = [n+1 for i in range(n)]
dist = 1
first_diff = False
for i in range(1,n):
    if v[i] != v[i-1]:
        dist =1
        pre_suf[i] = dist
        first_diff = True
    elif first_diff:
        dist+=1
        pre_suf[i] = dist

first_diff  = False
for i in range(n-2,-1,-1):
    if v[i] != v[i+1]:
        dist =1
        pre_suf[i] = min(pre_suf[i], dist)
        first_diff = True
    elif first_diff:
        dist+=1
        pre_suf[i] = min(pre_suf[i], dist)

print(*pre_suf)