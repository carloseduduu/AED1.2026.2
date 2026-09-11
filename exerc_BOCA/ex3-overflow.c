#include <stdio.h>

int main(void)
{
    int lim, n1, n2;
    char op;

    scanf("%d", &lim);
    scanf("%d %c %d", &n1, &op, &n2);

    switch (op)
    {
    case '+':
        if ((n1 + n2) > lim)
        {
            printf("overflow\n");
        }
        else
        {
            printf("no overflow\n");
        }
        break;
        
    case 'x':
        if ((n1 * n2) > lim)
        {
            printf("overflow\n");
        }
        else
        {
            printf("no overflow\n");
        }
    }

    return 0;
}