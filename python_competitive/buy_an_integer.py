# https://atcoder.jp/contests/abc146/tasks/abc146_c
import math
A, B, X = map(int, input().split())

def check_N(n: int):
    dn = len(str(n))

    return A*n + B*dn <= X


upper = 10**9

def bin_search(left, right, best):
    if (left > right):
        return best
    
    n = int((right + left)/2)
    
    if check_N(n):
        best = n
        left = n+1
        return bin_search(left, right, best)
    else:
        right = n-1
        return bin_search(left, right, best)


print(bin_search(0, upper, 0))