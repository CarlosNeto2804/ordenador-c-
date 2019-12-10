class InsertionSort
{
public:
    InsertionSort(){};

public:
    void sort(int vetor[], int tamanho)
    {
        int j, i, chave;
        for (j = 1; j < tamanho; j++)
        {
            chave = vetor[j];
            for (i = j - 1; (i >= 0) && (vetor[i] > chave); i--)
                vetor[i + 1] = vetor[i];
            vetor[i + 1] = chave;
        }
    };
};