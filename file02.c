#include <stdio.h>

void fun(int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1 ;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void main()
{
    fun(10);
    //printf("Hii\n");
}