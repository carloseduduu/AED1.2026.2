#include <stdio.h>

int main()
{
    int n = 0, temp = 0;
    scanf("%d", &n);
    int seq[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (seq[j] > seq[j + 1])
            {
                temp = seq[j];
                seq[j] = seq[j+1];
                seq[j+1] = temp;

            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", seq[i]);
    }
}