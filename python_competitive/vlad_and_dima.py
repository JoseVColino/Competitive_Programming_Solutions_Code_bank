cases = int(input())

for _ in range(cases):
    len_a = int(input())
    a = input()
    len_b = int(input())
    b = input()
    c = input()
    cout = 0
    for ch in b:
        if c[cout] == "V":
            a = ch + a
        else:
            a = a + ch
        cout +=1
    print(a)
    