n, m = map(int,input().split())
faucets = []
for _ in range(n):
    a = input()
    faucets.append(a)

xl = ''
count = 1
for f in faucets:
    if 'x' in f:
        xl = f
        break
    count+=1

whole = True
for i in range(m):
    if whole and xl[i]=='o':
        whole = False
    if not whole:
        print('Drain', xl.find('x')+1)
        exit()


print('Faucet',count)
