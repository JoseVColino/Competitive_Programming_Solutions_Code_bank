t = int(input())

for _ in range(t):
    n = int(input())
    s = list(map(lambda x: ord(x)-97,input()))
    ops = [0 for i in range(25)]

    for i in range(0,n//2):
        low = min(s[i], s[n-1-i])
        big = max(s[i], s[n-1-i])
        for j in range(low,big):
            if ops[j]: continue
            ops[j] = 1

    print(sum(ops))