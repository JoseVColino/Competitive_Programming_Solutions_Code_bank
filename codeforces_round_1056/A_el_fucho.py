from math import log2,ceil

test = int(input())

for i in range(test):
    teams = int(input())
    winners = teams
    losers = 0
    count = 0
    while (True):
        if winners == 1 and losers == 1:
            break
        losers += int(winners/2)
        count += int(winners/2)
        winners = ceil(winners/2)

        count += int(losers/2)
        losers = ceil(losers/2)
    print(count+1)
