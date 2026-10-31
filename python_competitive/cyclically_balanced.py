n, q = map(int,input().split())
q+=1
s = input()
maps = {
    '000': [1,0,0],
    '001': [1,0,0],
    '010': [-1,1,0],
    '011': [0,0,1],
    '100': [1,0,0],
    '101': [0,1,-1],
    '110': [0,0,1],
    '111': [0,0,1],
}

def sum_arr(a,b):
    return [a+b for a,b in zip(a,b)]
def sub_arr(a,b):
    return [a-b for a,b in zip(a,b)]

count = [0,0,0]
ps =[]
len_s = len(s)
for i in range(len(s)):
    if i == 0:
       key=s[0]*3
    else: 
       key = s[i-1]+s[i]+s[0]
    count = sum_arr(count,maps[key])
    ps.append(count)
while q:=q-1:
    res =0
    l,r = map(lambda x: int(x)-1,input().split())
    if l == 0:
        count = ps[r]
    else:
        count = sub_arr(ps[r],ps[l-1])
    print(f'{count} = {ps[r]} - {ps[l-1]}')
    val =0
    c0 = count[0]
    c1 = count[1]
    res =0
    c2 = count[2]
    if r-l <=2:
        print(4-(r-l+1))
        continue
    while c0 != c1 or c1 != c2:
        if c1>=c0 and c1>=c2:
            res+=2*c1-c0-c2
            c0 = c1
            c2 = c1
            break
        if c0>=c2:
            val = int((c0+c1+1)/2)
            res += c0-val
            c0 = val
            c1 = val
            if val % 2 == 1:
                res+=2
        else:
            val = int((c2+c1+1)/2)
            res += c2-val
            c2 = val
            c1 = val
            if val % 2 == 1:
                res+=2
    
    print(res)
