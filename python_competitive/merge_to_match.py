t = int(input())

t+=1
while t:=t-1:
    n,m = map(int,input().split())
    a = map(int,input().split())
    b = map(int,input().split())
    a = sorted(a)
    b = sorted(b)
    flag = False
    for bi in b:

        al = 0
        ar = 1
        while (1):
            if al >= len(a) or ar >= len(a):
                print('NO')
                flag = True
                break
            if a[al] < bi:
                al+=1
                continue
            if a[ar] < bi:
                ar+=1
                continue 
            break

        if not(al >= len(a) or ar >= len(a)):
            a.pop(ar)
            a.pop(al)
    if not flag:
        print('YES')
        continue
    

