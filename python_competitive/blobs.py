from functools import reduce
n = int(input())

for i in range(n):
    comida = int(float(input()))
    li = len(f"{comida:b}")
    binary = f'{comida:b}'
    print(f'{li if reduce(lambda x,y: int(x)+int(y),binary, 0) != 1 else li-1} dias')