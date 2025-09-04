n = int(input())

output = [0] * n # crating the output list with 0's

numbers = list(map(int, input().split()))
max_bit = max(numbers).bit_length()

for i in range(max_bit):
    mask = 1 << i
    ones = len([1 for number in numbers if number & mask])

    
    for count in range(ones):
        output[count] |= mask # adding the one at right spot

print(*output)
