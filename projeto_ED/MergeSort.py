def mergesort(arquivo):
    if len(arquivo) > 1:
        meio = len(arquivo) // 2
        esquerda = arquivo[:meio]
        direita = arquivo[meio:]
        mergesort(esquerda)
        mergesort(direita)
        i = j = k = 0
        while i < len(esquerda) and j < len(direita):
            if esquerda[i] < direita[j]:
                arquivo[k] = esquerda[i]
                i += 1
            else:
                arquivo[k] = direita[j]
                j += 1
            k += 1
        while i < len(esquerda):
            arquivo[k] = esquerda[i]
            i += 1
            k += 1
        while j < len(direita):
            arquivo[k] = direita[j]
            j += 1
            k += 1
    return arquivo