#include <stdio.h>
int main()
{
    int test, i, n;
    scanf("%d", &test);
    while (test--)
    {
        int c, sum = 0, check=0;
        scanf("%d", &n);
        scanf("%d", &c);
        int require[n];
        for (i = 0; i < n; i++)
            scanf("%d", &require[i]);
        for (i = 0; i < n; i++)
            sum = sum + require[i];
            printf("%d\n",sum);
        check = sum + (n * 2);
            printf("%d\n",check);

        if (check <= c)
            printf("Yes \n");
        else
            printf("No \n");
    }
}