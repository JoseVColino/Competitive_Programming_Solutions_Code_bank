a, b = map(int,input().split())
if a < 0 and b > 0 or a > 0 and b < 0:
    print('No')
else:
    print('Yes')