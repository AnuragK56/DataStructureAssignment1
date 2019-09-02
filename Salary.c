#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n,i,min, sum = 0;
        scanf("%d", &n) ;
        int salary[n], diff[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &salary[i]);
            if (i == 0)
                min = salary[0];
            if (salary[i] < min)
            {
                min = salary[i];
            }
        }
        for (i = 0; i < n; i++)
        {
            {
                diff[i] =salary[i]-min;
                sum = sum + diff[i] ;
            }
        }
        printf("%d",sum);
    }
}

