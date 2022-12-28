//Só necessitava implementar a função

void mergeAB(int *v, int *a, int n, int *b, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            v[k] = a[i];
            i++;
        }
        else
        {
            v[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        v[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        v[k] = b[j];
        j++;
        k++;
    }
}