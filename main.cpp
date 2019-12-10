#include <iostream>
#include <string>
#include "bubble_sort.cpp"
#include "selection_sort.cpp"
#include "quick_sort.cpp"
#include "insertion_sort.cpp"
using std::string;

void run()
{
    int tamanho;
    std::cout << "Digite o tamanho do vetor:" << std::endl;
    std::cin >> tamanho;
    int vetor[tamanho];
    std::cout << "Insira os valores do vetor:" << std::endl;
    for (int i = 0; i < tamanho; i++)
    {
        std::cin >> vetor[i];
    }
    BubbleSort bubble;
    bubble.sort(vetor,tamanho);
    // SelectionSort selection;
    // selection.sort(vetor, tamanho);
    // QuickSort quick;
    // quick.sort(vetor,0,tamanho-1);
    // InsertionSort insertion;
    // insertion.sort(vetor, tamanho);
     for (int i = 0; i < tamanho; i++)
    {
        std::cout << vetor[i] << " ";
    }
};


int main()
{
    run();
    return 0;
};