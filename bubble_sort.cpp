class BubbleSort
{
public:
    BubbleSort(){};

public:
    void sort(int vetor[], int tamanho)
    {
        int i, j;
        for (i = 1; i < tamanho; i++)
        {
            for (j = 0; j < tamanho - 1; j++)
            {
                if (vetor[j] > vetor[j + 1])
                {
                    exchange(j, j + 1, vetor);
                }
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
