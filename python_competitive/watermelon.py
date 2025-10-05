
def watermellon(a):
    if a < 3:
        return 'NO'
    else:
        if a & 1 :
            return 'NO'
        else:
            return 'YES'

a = int(input())
print(watermellon(a))