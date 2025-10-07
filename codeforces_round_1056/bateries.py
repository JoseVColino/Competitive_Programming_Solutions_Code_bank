# https://codeforces.com/contest/2155/problem/D
import sys
t = int(input())

for test in range(t):
    answer = 'none'
    bats = int(input())
    for i in range(bats):
        for j in range(bats-i-1):
            print(i+1,i+j+2)
            sys.stdout.flush()
            answer = input()
            if answer == '1' or answer == -1:
                break
        if answer == '1' or answer == -1:
            break
    if answer == -1:
        break