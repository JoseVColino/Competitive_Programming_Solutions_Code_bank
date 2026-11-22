t = int(input())

def naturais(n):
    return (n*(n+1))/2

for _ in range(t):
    n,k = map(int,input().split())
    s = input()
    zeros = s.count('0')
    ones = s.count('1')
    maxres = max(naturais(min(n,zeros+k)) + naturais(max(0, ones-k)), naturais(max(0,zeros-k))+naturais(min(n,ones+k)))
    print(int(maxres+1))
