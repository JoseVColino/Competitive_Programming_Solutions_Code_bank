t = int(input())


for i in range (t):
    bl = 0
    br = 0
    n = int(input())
    s = input()

    for c in s:
        if c == '(': bl +=1
        if c == ')': br +=1

    if (bl == br):
        print ('YES')
    else:
        print('NO')
