f = lambda x: x**2 - 5

a, b = [2,3]

e = 0.01

i = 0
while abs(b-a) > e:

    m = (a+b)/2
    teste = f(a)*f(m)
    if teste > 0:
        a = m
    else:
        b = m

    print(f'{i}: {a=:.03f}, {b=:.03f}, {m=:.03f}, {f(m)=:.03f}, [{a:.3f},{b:.3f}], {abs(b-a)} {">"if (abs(b-a) > e) else "<"} {e}')
    i+=1

print(f'\nResposta: {(a+b)/2}')