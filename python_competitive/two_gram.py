str_len = int(input())

s = input()

freqs = dict()
best = 0
best_two_grains = None
for i in range(str_len-1):
    two_grain = f'{s[i]}{s[i+1]}'
    if two_grain not in freqs.keys():
        freqs.update([(two_grain, 1)])
    else:
        freqs.update([(two_grain, freqs[two_grain]+1)])

 
    if best < freqs[two_grain]:
     best = freqs[two_grain]
     best_two_grains = two_grain

print(best_two_grains)