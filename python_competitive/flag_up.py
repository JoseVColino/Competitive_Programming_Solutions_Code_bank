s1 = input().split()
s2 = input().split()

flag = True
for c in range(5):
    if (s1[c] == s2[c]):
        flag = False

if flag: 
    print('Y')
else: 
    print('N')