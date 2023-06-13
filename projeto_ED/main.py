#Jafet de Lima - 20190036118

import QuickSort
import MergeSort
import InsertionSort
import BubbleSort
import SelectionSort
import time

#Com os imports acima, importamos os arquivos que contém os algoritmos de ordenação

pasta = "instancias-num/"
#Aqui definimos a pasta onde estão os arquivos de instâncias

arquivos = ["num.1000.1.in", "num.1000.2.in", "num.1000.3.in", "num.1000.4.in", "num.10000.1.in", "num.10000.2.in", "num.10000.3.in", "num.10000.4.in", "num.100000.1.in", "num.100000.2.in", "num.100000.3.in", "num.100000.4.in",]
#Aqui definimos os arquivos que serão utilizados

for arquivo in arquivos:
    with open(pasta + arquivo, "r") as file:
        l = file.readlines()
        l = [int(i) for i in l]
        #Aqui abrimos o arquivo e o transformamos em uma lista de inteiros
        print("Arquivo: " + arquivo)

        print("QuickSort: ")

        inicio = time.time()
        QuickSort.quicksort(l)
        fim = time.time()
        print("Tempo de execução: " + str(fim - inicio))
        #Aqui imprimimos o tempo de execução do algoritmo QuickSort

        print("MergeSort: ")

        inicio = time.time()
        MergeSort.mergesort(l)
        fim = time.time()
        print("Tempo de execução: " + str(fim - inicio))
        #Aqui imprimimos o tempo de execução do algoritmo MergeSort

        print("InsertionSort: ")

        inicio = time.time()
        InsertionSort.insertionsort(l)
        fim = time.time()
        print("Tempo de execução: " + str(fim - inicio))
        #Aqui imprimimos o tempo de execução do algoritmo InsertionSort

        print("BubbleSort: ")

        inicio = time.time()
        BubbleSort.bubblesort(l)
        fim = time.time()
        print("Tempo de execução: " + str(fim - inicio))
        #Aqui imprimimos o tempo de execução do algoritmo BubbleSort

        print("SelectionSort: ")

        inicio = time.time()
        SelectionSort.selectionsort(l)
        fim = time.time()
        print("Tempo de execução: " + str(fim - inicio))
        #Aqui imprimimos o tempo de execução do algoritmo SelectionSort

        print("Fim do arquivo " + arquivo + "\n")

