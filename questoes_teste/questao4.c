#include <stdio.h>

int main()
{

    int n = 0, cont = 0;
    scanf("%d", &n);
    int seq[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }

    if (n < 3)
    {
        printf("%d\n", cont);
    }
    else
    {

        for (int i = 0; i <= n - 2; i++)
        {
            if (seq[i] == 1 && seq[i + 1] == 0 && seq[i + 2] == 0)
            {
                cont++;
            }
        }

        printf("%d", cont);
    }
}