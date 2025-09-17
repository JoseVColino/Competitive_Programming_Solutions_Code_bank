# sbc 2025 problema M

from collections import deque

def max_min_height(a, K):
    """
    a: list (0-indexed) com as alturas x1..xN
    K: inteiro
    Retorna inteiro: maior altura mínima possível após um único reforço.
    """
    N = len(a)
    # Converter para 1-based para fórmulas diretas
    a = [0] + a
    INF = 10**30

    # prefix_min[i] = min a[1..i]
    prefix_min = [INF] * (N + 1)
    for i in range(1, N+1):
        prefix_min[i] = min(prefix_min[i-1], a[i])

    # suffix_min[i] = min a[i..N]
    suffix_min = [INF] * (N + 2)
    for i in range(N, 0, -1):
        suffix_min[i] = min(suffix_min[i+1], a[i])

    # b[j] = a[j] + j
    b = [0] * (N + 1)
    for j in range(1, N + 1):
        b[j] = a[j] + j

    dq = deque()  # manterá índices j com b[j] em ordem crescente
    ans = -INF

    for i in range(1, N + 1):
        L = max(1, i - K + 1)  # janela [L..i] coberta pela escada

        # remover índices fora da janela (à esquerda)
        while dq and dq[0] < L:
            dq.popleft()

        # inserir i mantendo monotonicidade por b[]
        while dq and b[dq[-1]] >= b[i]:
            dq.pop()
        dq.append(i)

        # mínimo de b na janela é b[dq[0]]
        min_b = b[dq[0]]

        # mínimo fora da janela (posições que não recebem blocos)
        min_outside = INF
        if L - 1 >= 1:
            min_outside = min(min_outside, prefix_min[L - 1])
        if i + 1 <= N:
            min_outside = min(min_outside, suffix_min[i + 1])

        # mínimo dentro da janela após o reforço: min_b + K - i
        min_inside_after = min_b + K - i

        # o mínimo total após operação terminando em i
        curr_min = min(min_outside, min_inside_after)

        # queremos o maior possível entre todas as escolhas de i
        ans = max(ans, curr_min)

    return int(ans)



print(max_min_height())