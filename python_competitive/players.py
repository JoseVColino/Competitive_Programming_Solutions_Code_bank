# https://codeforces.com/problemset/problem/96/A
players = input()

consecutive_1 = 0
consecutive_0 = 0

flag = False
for c in players:
    if c == "1":
        consecutive_0=0
        consecutive_1+=1
    else:
        consecutive_1=0
        consecutive_0+=1
    if consecutive_0 >= 7 or consecutive_1 >= 7:
        flag = True

if flag:
    print('YES')
else:
    print("NO")