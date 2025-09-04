# https://codeforces.com/problemset/problem/1861/A
def find_prime(seq:str):
    ind_3 = seq.find('3')
    ind_1 = seq.find('1')
    if ind_1 > ind_3:
        print(31)
    else:
        print(13)



t = int(input())

for i in range(t):
    seq = input()
    output = find_prime(seq)