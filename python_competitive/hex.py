# https://www.freecodecamp.org/learn/daily-coding-challenge/2025-08-31

import random


def generate_hex(color):
    randhex1 = random.randint(0, 15)
    randhex2 = random.randint(0, 15)
    randhex3 = random.randint(0, 15)
    randhex4 = random.randint(0, 15)

    if color == 'red':
        return f'FF{randhex1:x}{randhex2:x}{randhex3:x}{randhex4:x}'
    elif color == 'green':
        return f'{randhex1:x}{randhex2:x}FF{randhex3:x}{randhex4:x}'
    elif color == 'blue':
        return f'{randhex1:x}{randhex2:x}{randhex3:x}{randhex4:x}FF'
    else:
        return 'Invalid color'
