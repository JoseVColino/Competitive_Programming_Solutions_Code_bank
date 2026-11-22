lucca = 1664.05
eu = 686.25
jose = 819.36
total = lucca + eu + jose
caixinha = 1468.97 # acabei de atualzar


print(f'lucca = {lucca/total*100:.2f}%')
print(f'jvic = {eu/total*100:.2f}%')
print(f'jval = {jose/total*100:.2f}%')
print(f'dindin lucca:  {caixinha*lucca/total:.2f} / {caixinha:.2f}')
print(f'dindin jvic: {caixinha*eu/total:.2f} / {caixinha:.2f}')
print(f'dindin jval: {caixinha*jose/total:.2f} / {caixinha:.2f}')

print(f'\n{caixinha*lucca/total + caixinha*eu/total + caixinha*jose/total:.2f} = {caixinha}')