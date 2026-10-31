t = int(input())

for i in range(t):
    word, oper = map(int,input().split())
    letters = set()
    flag = True
    for j in range(word):
        w = input()
        letters.add(w[0].upper())
    for j in range(oper):
        ab = input()
        for c in ab:
            if c.upper() not in letters:
                flag = False
                break
        if not flag: continue
    if not flag:
        print('NO')
    else:
        print('YES')