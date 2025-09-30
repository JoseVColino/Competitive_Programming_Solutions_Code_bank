#https://judge.beecrowd.com/pt/problems/view/1039
import math
def dist(x1,x2,y1,y2):
    return math.sqrt((x1-x2)**2 +(y1-y2)**2)
while True:
    try:
        r1, x1, y1, r2, x2, y2 = map(int,input().split())
        if r1 >= dist(x1,x2,y1,y2) + r2:
            print('RICO')
        else:
            print('MORTO')
    except:
        break