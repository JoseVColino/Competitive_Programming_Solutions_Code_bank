# https://judge.beecrowd.com/pt/problems/view/1291
from math import pi, sqrt

S3C = (pi/3 - sqrt(3)/4 - pi/2 + 1)*4
S2C = (-pi/4 - 2*pi/3 + sqrt(3)/2 + pi - 1)*4

try:
    while True:
        line = input().strip()
        if not line:
            continue
        a = float(line)
        a2 = a*a
        s3 = a2 * S3C
        s2 = a2 * S2C
        s1 = a2 - (s3 + s2)
        eps = 1e-9               # pequeno ajuste para estabilidade de arredondamento
        print(f'{s1+eps:.3f} {s2+eps:.3f} {s3+eps:.3f}')
except EOFError:
    pass
