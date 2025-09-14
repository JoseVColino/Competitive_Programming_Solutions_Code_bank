# https://www.freecodecamp.org/learn/daily-coding-challenge/2025-09-13
def find_missing_numbers(arr):
    seen = set(arr)
    missing = []
    for i in range(min(arr), max(arr)+1):
        if i not in seen:
            missing.append(i)

    return missing