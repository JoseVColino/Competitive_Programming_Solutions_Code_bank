# https://judge.beecrowd.com/pt/problems/view/1256

def h(n,size):
    return n%size

tests = int(input())
for i in range(tests):
    size, key_number = map(int,input().split())
    keys = list(map(int,input().split()))

    hm = {
        key: [] 
        for key in
        range(size)
    }
    for key in keys:
        hm[h(key,size)].append(key)

    for key, value in hm.items():
        print(key,*value,"\\",sep=' -> ')

    print() if i != tests-1 else ...
