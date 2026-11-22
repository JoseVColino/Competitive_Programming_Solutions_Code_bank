def f(s:str):
    count = 0
    lastc = ''
    slastc = ''
    less_flag = True
    less = 0
    for i,c in enumerate(s):

        if less_flag and lastc and slastc:
            if slastc == c and slastc != lastc:
                less=2
                less_flag = False
            elif lastc != slastc and lastc != c:
                if less < 1:
                    less=1
                
            

        if c == lastc:
            count-=1
        count+=1

        if lastc:
            slastc = lastc
        lastc = c


    return count-less

t = int(input())+1

while t:=t-1:
        

    n= int(input())
    s= input()

    print(f(s))
