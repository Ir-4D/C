#include<stdio.h>
#define T 10
void main()
{
    int a[T] = {8,5,1,2,0,4,7,9,3,6};
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;
    for(i = 1;i < T;i ++)
    {
        temp = a[i];
        j = i-1;
        while(j >= 0 && a[j] < temp)
        {
            a[j+1] = a[j];
            j --;
        }
        a[j+1] = temp;
    }
    for(i = 0; i < T; i++)
    {
        printf("%d ",a[i]);
    }

}