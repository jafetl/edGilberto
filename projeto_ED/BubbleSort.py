def bubblesort(arquivo):
    for i in range(len(arquivo)):
        for j in range(len(arquivo)-1):
            if arquivo[j] > arquivo[j+1]:
                arquivo[j], arquivo[j+1] = arquivo[j+1], arquivo[j]
    return arquivo