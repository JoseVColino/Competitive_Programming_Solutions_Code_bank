from pprint import pprint

def handleA():
    print('doing A')

def handleB():
    print('doing B')
    

def handleC():
    print('doing C')


key = 'hello'
d1 = {
    'A': handleA,
    'B': handleB,
    'C': handleC,
    key: 12
}

def changeVariableKey(dict,key, newValue):
    oldkey = key
    key = newValue
    dict = {**dict, key:dict[oldkey]}
    dict.pop(oldkey)
    return dict

d1 = changeVariableKey(d1,key,'NewKeyValue')

pprint(key)


