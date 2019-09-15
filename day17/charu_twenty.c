#include <stdio.h>
#define T 10
int main()
{
    int a[T] = {8, 5, 1, 2, 0, 4, 7, 9, 3, 6};
    int i, j, k, t;
    for (i = 0; i < T - 1; i++)
    {
        /**/;
        k = T-2;
        for (j = i + 1; j < T; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        if (k <= j)
        {
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
    for (i = 0; i < T; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}