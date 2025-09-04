# https://judge.beecrowd.com/pt/problems/view/2310

N = int(input())
sAcc = bAcc = aAcc =sPon = bPon = aPon = 0

for i in range(N):
    nome = input()
    sTot,bTot,aTot = map(int,input().split())
    sn,bn,an = map(int,input().split())

    sPon += sn
    bPon += bn
    aPon += an

    sAcc += sTot
    bAcc += bTot
    aAcc += aTot

print(f'Pontos de Saque: {sPon/sAcc*100:.2f} %.')
print(f'Pontos de Bloqueio: {bPon/bAcc*100:.2f} %.')
print(f'Pontos de Ataque: {aPon/aAcc*100:.2f} %.')