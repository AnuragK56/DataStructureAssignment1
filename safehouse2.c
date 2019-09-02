#include <stdio.h>

void bubblesort(int a[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int m, x, y, i, j, escape, police, sum = 0;
        scanf("%d", &m);
        int safehouse[150];
        for (i = 0; i < 150; i++)
            safehouse[i] = 0;
        scanf("%d", &x);
        scanf("%d", &y);
        escape = x * y;
        for (i = 0; i < m; i++)
        {

            scanf("%d", &police);
            police -= 1;
            for (j = police - escape; j <= police + escape; j++)
                if (j >= 0 && j < 150 && safehouse[j] == 0)
                    safehouse[j] = 1;
        }
        for (i = 0; i < 150; i++)
            if (safehouse[i] == 0)
                sum++;
        printf("%d \n", sum);
    }
    return 0;
}
