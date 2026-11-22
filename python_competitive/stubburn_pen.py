t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    last = 'B'
    switch = 0
    for c in s:
        if last == c:
            switch+=1
        last = c
    print(switch)