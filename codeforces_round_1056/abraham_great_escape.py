# https://codeforces.com/contest/2155/problem/B

t = int(input())
t+=1

while t:=t-1:
    n, k = map(int,input().split())
    if k == n*n-1:
        print('NO')
        continue
    print('Yes')
    for i in range(n):
        for j in range(n):
            is_k_left = k > 0
            is_last_row = i == n-1
            is_last_column = j == n-1

            if is_k_left:
                print('U',end='')
                k -= 1
                continue
            if not is_last_row:
                print('D',end='')
                continue
            if not is_last_column:
                print('R',end='')
                continue
            print('L',end='')
            

        print()