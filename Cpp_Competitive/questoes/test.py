import random
from pathlib import Path
with open( Path.cwd() / 'Cpp_competitive' /  'questoes' / 'exemplo.txt', 'w', encoding='utf8') as file:
    n = 1000
    k = random.randint(1, 100)
    nums = ( random.randint(1,10**4) for _ in range(n))
    file.write(f'{n} {k}\n')
    for num in nums:
        file.write(f'{num} ')
    file.write('\n')
