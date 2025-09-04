
N = int(input())


numbers = map(int, input().split())

def binary_to_number(binary: list):
    n = 0
    cout = 0
    for b in reversed(binary):
        n += int(b)*2**cout
        cout+=1
    
    return n

def to_binary(n):
    return list(f'{n:010b}')
    

bin_numbers = list(map(to_binary, numbers))

for j, number in enumerate(bin_numbers):
    if j == 0:
        continue

    for i, bit in enumerate(number):
        if bit == '1':
            for bigger_number in bin_numbers[:j]:
                if bigger_number[i] == '0':
                    number[i] = '0'
                    bigger_number[i] = '1'
                    break

final_numbers = list(map(binary_to_number, bin_numbers))
print(final_numbers)


'''
N = int(input())
numbers = list(map(int, input().split()))

B = max(numbers).bit_length()
result = [0] * N # creating a list with N 0'ed numbers

for bit in reversed(range(B)):  # bit mais significativo primeiro
    mask = 1 << bit
    count_ones = sum(1 for num in numbers if num & mask)
    
    # Coloca esse bit nos primeiros 'count_ones' números
    for i in range(count_ones):
        result[i] |= mask # adds the bit to the number
    # Atualiza 'numbers' para próxima rodada? Não é necessário.

print(*result)
'''