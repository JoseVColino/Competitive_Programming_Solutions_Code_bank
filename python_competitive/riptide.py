t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    least = min(a, b, c)
    most = max(a, b, c)
    med = a + b + c - least - most

    print(min(med - least, most - med))