def fact(n):
    if n <= 1:
        return 1
    return n*fact(n-1)
    
while True:
    a = input()
    if a == '0':
        break
    sumA = 0
    lenA = len(a)
    for c in a:
        i = int(c)
        sumA += i*fact(lenA)
        lenA -=1
        
    print(sumA)