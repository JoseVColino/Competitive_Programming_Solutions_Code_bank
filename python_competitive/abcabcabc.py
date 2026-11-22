n = int(input())
s= input()

pref = [{'a':0,'b':0,'c':0} for i in range(n)]
suff = [{'a':0,'b':0,'c':0} for i in range(n)]

for i in range(n):
    pref[i][s[i]]+=1
for i in range(n-1,-1,-1):
    suff[i][s[i]]+=1


    