#include <stdio.h>

void fun1(int arr[],int n,int m);

void fun(int arr[],int n,int m)
{
    scanf("%d\n",&arr[m]);
    fun1(arr,n,m+1);
    

    
    //printf("%d\n",arr[n-m-1]);
    printf("%d\n",arr[m]);

    

}

void fun1(int arr[],int n,int m)
{
    if(m<n)
    {
        fun(arr,n,m);
    }
}

void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    fun(arr,n,0);
}