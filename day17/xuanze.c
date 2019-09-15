#include<stdio.h>
#define T 10
void main()
{
    int a[T] = {8,5,2,1,0,4,7,9,3,6};
    int max = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;
    for(i = 0; i < T-1;i ++)//比个数少比一次
    {
        for(j = i+1; j < T;j ++)//i+1不用和自己比，程序效率更高
        {
            if(a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }           
        }       
    }
/*    
    for(i = 0; i < T;i ++)//倒序
    {
        printf("%d ",a[i]);
    }
*/
    for(i = T-1; i >= 0;i --)//正序
    {
        printf("%d ",a[i]);
    }
        
}