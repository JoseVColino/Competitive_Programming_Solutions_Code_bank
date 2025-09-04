# https://judge.beecrowd.com/pt/problems/view/2479

mapping = {
    '+': (1,0),
    '-': (0,1)
}
comportamento = [0,0]
nomes = []
n = int(input())
for i in range(n):
    sign,nome = input().split()
    comportamento = [comportamento[0]+mapping[sign][0],comportamento[1]+mapping[sign][1]]
    nomes.append(nome)

