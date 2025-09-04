# https://judge.beecrowd.com/pt/problems/view/2031

N = int(input())


resultMap = {
    'pedra' : {
        'pedra': 'Sem ganhador',
        'papel': 'Jogador 1 venceu',
        'ataque': 'Jogador 2 venceu'
    },
    'papel': {
        'pedra': 'Jogador 2 venceu',
        'papel': 'Ambos venceram',
        'ataque': 'Jogador 2 venceu'
    },
    'ataque': {
        'pedra': 'Jogador 1 venceu',
        'papel': 'Jogador 1 venceu',
        'ataque': 'Aniquilacao mutua'
    }
}

for i in range(N):
    p1 = input()
    p2 = input()

    print(resultMap[p1][p2])


# pointMap = {
#     'pedra': 0,
#     'papel': -1,
#     'ataque': 2
# }

    # result = pointMap[p1] + pointMap[p2]
    # if result == -2:
    #     print("Ambos venceram")
    # elif result == -1 and p1 == 'pedra':
    #     print('Jogador 1 venceu')
    # elif result == -1 and p2 == 'pedra':
    #     print('Jogador 2 venceu')
    # elif result == 0:
    #     print("Sem ganhador")
    # elif result ==1 and p1 == 'ataque':
    #     print("Jogador 1 venceu")
    # elif result ==1 and p2 == 'ataque':
    #     print("Jogador 2 venceu")
    # elif result == 2 and p1 == 'ataque':
    #     print('jogador 1 venceu')
    # elif result == 2 and p2 == 'ataque':
    #     print('jogador 2 venceu')
    # elif result == 4:
    #     print('Aniquilacao mutua')
