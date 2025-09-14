mydict = {
    'a': 5,
    'b': 2
}

mydict.update([('c',3), ('d',4)])

mydict = sorted(mydict, key=lambda x: mydict[x])

from pprint import pprint

pprint(mydict)