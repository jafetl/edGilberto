def selectionsort(arquivo):
    for i in range(len(arquivo)):
        menor = i
        for j in range(i+1, len(arquivo)):
            if arquivo[j] < arquivo[menor]:
                menor = j
        arquivo[i], arquivo[menor] = arquivo[menor], arquivo[i]
    return arquivo