# https://judge.beecrowd.com/pt/problems/view/1308
import math
testes = int(input())

def root(n):
    return int((math.sqrt(1+8*n) - 1) / 2)

for i in range(testes):
    num = int(input())
    print(root(num))
