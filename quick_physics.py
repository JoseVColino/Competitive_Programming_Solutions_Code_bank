#just a physics 3 function to find the missing variable in the RC filter frequency equation

from math import pi

def frequencia_corte(capacitancia, resistencia):
    return 1/(2*pi*capacitancia*resistencia)*1e9

def find_missing(arg1,arg2):
    return 1/(2*pi*arg1*arg2)*1e9


capacitancia, resistencia = map(int,input('Omita Capacitancia (nFs), Resistencia (Ohms) ou Frequencia(Hz):').split())

print(find_missing(capacitancia,resistencia))


