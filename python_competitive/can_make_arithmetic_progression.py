arr = [2,4,6,0]

def can_make_arithmetic_progression(arr):
    arr = sorted(arr)
    dif = arr[1] - arr[0]
    for i in range(len(arr)-1):
        if dif != arr[i+1] - arr[i]:
            return False
        dif = arr[i+1] - arr[i]

    return True

print(can_make_arithmetic_progression(arr))
