hi, mi, hf, mf = map(int,input().split())
ti = hi*60 + mi
tf = hf*60 + mf

if tf <= ti:
    res = 24*60 - (ti-tf)
else:
    res = tf-ti
    
horas = int(res/60)
minutos = res % 60
    

print(f'O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)')