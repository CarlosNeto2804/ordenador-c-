class QuickSort
{
public:
    QuickSort(/* args */){};

public:
    void sort(int vetor[], int inicio, int fim)
    {
        if (inicio < fim)
        {
            int posicaoPivo = separar(vetor, inicio, fim);
            sort(vetor, inicio, posicaoPivo - 1);
            sort(vetor, posicaoPivo + 1, fim);
        }
    }

public:
    int separar(int vetor[], int inicio, int fim)
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
                exchange(i, f, vetor);
                i++;
                f--;
            }
        }
        vetor[inicio] = vetor[f];
        vetor[f] = pivo;
        return f;
    }

public:
    void exchange(int a, int b, int vetor[])
    {
        int aux = vetor[a];
        vetor[a] = vetor[b];
        vetor[b] = aux;
    }
};
