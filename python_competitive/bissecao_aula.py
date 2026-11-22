n_max = 100
e = 1.0e-10
a=0
b=1

f = lambda x: x**3 - 9*x + 3

def bissec(a,b,f,e=1.0e-6,n_max=100):
    while abs(b-a)> e and n_max > 0:
        m = (a+b)/2
        print(f'Iter {101-n_max} {a=} {b=} {m=} {f(m)=}')

        n_max-=1
        cond = f(a)*f(m) > 0
        if cond:
            b=m
        else:
            a=m

def false_pos(a,b,f,e=1.0e-6,n_max=100):
    while (n_max):
        n_max-=1
        x_star = b - (f(b)*(b-a))/(f(b)-f(a))
        if abs(x_star) < e:
            print(f'raiz: {x_star}')
            break
        if (f(x_star)*f(a) < 0):
            b = x_star
        else:
            a = x_star

def newton_raphson(a0,f,df,e=1.0e-6,n_max=100):
    a_ant = a0
    while n_max:
        n_max-=1
        a0 = a_ant -f(a0)/df(a0)
        if abs(a0-a_ant)/abs(a0) <= e:
            print(f'resp: {a0}')
            break
        a_ant=a0

f = lambda x: x**2-6
df= lambda x: 2*x

#newton_raphson(3, f, df)

def secante(f, x0, x1,e=1.0e-6,n_max=100):
    for i in range(n_max):
        fx0=f(x0)
        fx1=f(x1)
        x2 = (x0*fx1-x1*fx0)/(fx1-fx0 +1.0e-12)
        err = abs(x2-x1) / abs(x2)

        if err < e:
            print(f'resp: {x2}')
            break

        x0,x1 = x1,x2

secante(f, 2, 3)