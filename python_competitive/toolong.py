lines = int(input())

for i in range(lines):
    line = input()

    if (len(line) > 10):
        print(line[0], len(line)-2, line[-1], sep='')
    else:
        print(line)