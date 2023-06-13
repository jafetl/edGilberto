def insertionsort(arquivo):
    for i in range(1, len(arquivo)):
        chave = arquivo[i]
        j = i - 1
        while j >= 0 and chave < arquivo[j]:
            arquivo[j+1] = arquivo[j]
            j -= 1
        arquivo[j+1] = chave
    return arquivo