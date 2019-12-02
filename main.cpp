#include <iostream>
#include <string>
using std::string;
class Ordenador
{
public:
    void bubble_sort(int vetor[], int n)
    {
        bool ordenado = true;
        int i, j;
        for (i = 1; i < n && ordenado; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (vetor[j] > vetor[j + 1])
                {
                    ordenado = false;
                    troca(j, j + 1, vetor);
                }
            }
        }
    }
    //bubble_sort()
public:
    void selection_sort(int vetor[], int n)
    {
        bool ordenado = true;
        int menor;
        for (int i = 0; i < n - 1 && ordenado; i++)
        {
            menor = i;
            for (int j = i + 1; j < n; j++)
            {
                if (vetor[j] < vetor[menor])
                {
                    menor = j;
                }
            }
            if (vetor[i] != vetor[menor])
            {
                troca(menor, i, vetor);
            }
        }
    }

public:
    void quick_sort(int vetor[], int inicio, int fim)
    {
        if (inicio < fim)
        {
            int posicaoPivo = quick_sort_separar(vetor, inicio, fim);
            quick_sort(vetor, inicio, posicaoPivo - 1);
            quick_sort(vetor, posicaoPivo + 1, fim);
        }
    }

public:
    int quick_sort_separar(int vetor[], int inicio, int fim)
    {
        int pivo = vetor[inicio];
        int i = inicio + 1;
        int f = fim;
        while (i <= f)
        {
            if (vetor[i] < pivo)
                i++;
            else if (pivo < vetor[f])
                f--;
            else
            {
                troca(i, f, vetor);
                i++;
                f--;
            }
        }
        vetor[inicio] = vetor[f];
        vetor[f] = pivo;
        return f;
    }

    //-----------------------

public:
    void merge_sort() {}

public:
    void insertion_sort(int vetor[], int tamanho)
    {
        int j, i, chave;
        for (j = 1; j < tamanho; j++)
        {
            chave = vetor[j];
            for (i = j - 1; (i >= 0) && (vetor[i] > chave); i--)
                vetor[i + 1] = vetor[i];
            vetor[i + 1] = chave;
        }
    }

public:
    void troca(int a, int b, int vetor[])
    {
        int aux = vetor[a];
        vetor[a] = vetor[b];
        vetor[b] = aux;
    }
};

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
    Ordenador obj_ordenador;
    //obj_ordenador.selection_sort(vetor, tamanho);
    //obj_ordenador.bubble_sort(vetor, tamanho);
    // obj_ordenador.quick_sort(vetor, 0, tamanho - 1);
    // obj_ordenador.insertion_sort(vetor, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        std::cout << vetor[i] << " ";
    }
}

int main()
{
    run();
    return 0;
}