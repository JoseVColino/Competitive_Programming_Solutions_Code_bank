a, b = map(int, input().split())

c = a*b

out = 'Even' if c % 2 == 0 else "Odd"
print(out)