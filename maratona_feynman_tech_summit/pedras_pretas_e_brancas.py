a, b = map(int,input().split())
b = a - b
pedras = input()
size = len(pedras)
pretas = pedras.count('B')
pedras = list(pedras)
sum = 0


indexes = []
for i, pedra in enumerate(pedras):
    if pedra == 'W':
        indexes.append(i)

def bubble_sort(splice):
    global sum
    last_index = len(splice) - 1
    for i in range(last_index):
        switched = False
        for j in range(0, last_index - i):
            if splice[j] == 'W' and splice[j+1] == 'B':
                splice[j] = 'B'
                splice[j+1] = 'W'
                switched = True
                sum += b
        if not switched:
            return splice
    return splice

for i in range(size-1,pretas-1,-1):
    if pedras[i] == 'B':
        if (i - indexes[0])*b >= a:
            pedras[indexes[0]] = "B"
            pedras[i] = "W"
            indexes.pop(0)
            sum += a
            continue
        pedras[indexes[0]:i+1] = bubble_sort(pedras[indexes[0]:i+1])

print(sum)