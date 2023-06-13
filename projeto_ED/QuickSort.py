def quicksort(arquivo):
    if len(arquivo) <= 1:
        return arquivo
    else:
        pivo = arquivo.pop()
    menores, maiores = [], []
    for x in arquivo:
        if x < pivo:
            menores.append(x)
        else:
            maiores.append(x)
    return quicksort(menores) + [pivo] + quicksort(maiores)