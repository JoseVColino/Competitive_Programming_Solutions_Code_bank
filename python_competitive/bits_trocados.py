# https://judge.beecrowd.com/pt/problems/view/2187

n = 1

while(True):
    v = int(input())
    if v == 0: break
    i = int(v/50)
    j = int(v%50/10)
    k = int(v%10/5)
    l = int(v%5)

    print(f'Teste {n}')
    print(f'{i} {j} {k} {l}\n')
    n+=1
