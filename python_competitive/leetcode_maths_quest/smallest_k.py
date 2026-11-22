k = 7   
def smallest_n(k=k):
    if k == 1:
        return 1
    seen = set()
    len_n = 1
    rest = 1
    seen.add(1)
    while rest != 0:
        rest = (rest * 10 + 1) % k
        len_n +=1
        if rest in seen:
            return -1
        seen.add(rest)
        
    return len_n

print(smallest_n())