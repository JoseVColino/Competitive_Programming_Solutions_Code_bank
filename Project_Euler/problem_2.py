last = 2
slast = 1
sum= 0

while last < 4000000:
    sum += last if last & 1 == 0 else 0
    aux = last
    last = last+slast
    slast = aux
    
print(sum)