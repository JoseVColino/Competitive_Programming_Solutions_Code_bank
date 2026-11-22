n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

end = -1
beg = -1
flag = True
for i in range(n):
    if b[i] != a[i]:
        beg = i
        break
if beg == -1:
    print('Yes')
    exit()

for i in range(n-1,-1,-1):
    if b[i] != a[i]:
        end = i
        break

if beg == end:
    print('No')
    exit()


flag_end_to_beg = True
for i in range(beg,end):
    if b[i+1] != a[i]:
        flag_end_to_beg = False
        break

flag_beg_to_end = True
for i in range(beg,end):
    if b[i] != a[i+1]:
        flag_beg_to_end = False
        break

flag_end_to_beg = flag_end_to_beg and a[end] == b[beg]
flag_beg_to_end = flag_beg_to_end and a[beg] == b[end]



if flag_beg_to_end or flag_end_to_beg:
    print('Yes')
else:
    print('No')