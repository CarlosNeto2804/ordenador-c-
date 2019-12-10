class SelectionSort
{
public:
    SelectionSort(){};

public:
    void sort(int vetor[], int tamanho)
    {
        int menor;
        for (int i = 0; i < tamanho - 1; i++)
        {
            menor = i;
            for (int j = i + 1; j < tamanho; j++)
            {
                if (vetor[j] < vetor[menor])
                {
                    menor = j;
                }
            }
            if (vetor[i] != vetor[menor])
            {
                exchange(menor, i, vetor);
            }
        }
    };
public:
    void exchange(int a, int b, int vetor[])
    {
        int aux = vetor[a];
        vetor[a] = vetor[b];
        vetor[b] = aux;
    }
};