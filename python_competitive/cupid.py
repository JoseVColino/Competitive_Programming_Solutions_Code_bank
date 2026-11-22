n = int(input())

v = map(int,input().split())

v = sorted(v)

best = 1e10
sum_1=0
#roda sem unir os fins
for i in range(0,n-1,2):
    sum_1 += min(abs(v[i]-v[i+1]),24-abs(v[i]-v[i+1]))


sum_2 = min(abs(v[0]-v[n-1]), 24-abs(v[0]-v[n-1]))

for i in range(1,n-2,2):
    sum_2+= min(abs(v[i]-v[i+1]),24-abs(v[i]-v[i+1]))

print(min(sum_1,sum_2))