from functools import reduce

tests = int(input())

for i in range(tests):
    linhas = int(input())
    sum = 0
    for i in range(linhas):
        str = input()
        for j,c in enumerate(str):
            sum += ord(c)%65 + i + j
    print(sum)