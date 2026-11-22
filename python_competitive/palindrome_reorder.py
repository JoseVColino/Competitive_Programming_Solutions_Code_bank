s = input()

freq = dict()
for c in s:
    if c not in freq:
        freq[c] = 1
    else:
        freq[c]+= 1
odds = 0
for key in freq:
    if freq[key] % 2 == 1:
        odds+=1
    if odds > 1:
        break
if odds > 1:
    print('NO SOLUTION')
    exit()
start = str()
last = str()
center = False
for key in freq:
    if freq[key] % 2 == 1:
        center = key
    else:
        start += key * int(freq[key]/2)
        last += key * int(freq[key]/2)

if center:
    print(start+center*freq[center]+last[::-1])
else:
    print(start+last[::-1])