#include <stdio.h>

int sum(int arr[],int m)
{
    if(m*sizeof(int)<(int)(sizeof(arr)))
    {
        return arr[m]+sum(arr,m+1);
    }
}

void main()
{
    int a[]={1,2,3,4,5};
    int s=sum(a,0);
    printf("SUM=%d",s);
}