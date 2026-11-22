# final brasileira questão j, 2025
s = input()

substrings = {
    'ha': 1,
    'boooo':-1,
    'bravo': 3
}
soma =0
for i in range(len(s)):
    try:
        subs = s[i:i+5]
        if subs[0:2] == 'ha':
            soma+=1
            continue
        if (subs == 'boooo'):
            soma-=1
        if (subs == 'bravo'):
            soma+=3
    except:
        ...
print(soma)