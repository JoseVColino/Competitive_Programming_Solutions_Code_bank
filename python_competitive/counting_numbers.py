# https://judge.beecrowd.com/pt/problems/view/1171
amount = int(input())
number_freq = {}

for i in range(amount):
    number = int(input())

    if number in number_freq.keys():
        freq = number_freq[number]
        number_freq = {**number_freq, number: freq+1}
    else:
        number_freq = {**number_freq, number: 1}

sorted_keys = sorted(number_freq)
for key in sorted_keys:
    print(f'{key} aparece {number_freq[key]} vez(es)')
