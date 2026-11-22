def is_self_dividing(num):
    for digit in str(num):
        if digit == '0':
            return False
        if num % int(digit) != 0:
            return False
    return True

def self_dividing(left, right):
    result = []
    for i in range(left,right+1):
        if is_self_dividing(i):
            result.append(i)

    return result


print(self_dividing(47,85))