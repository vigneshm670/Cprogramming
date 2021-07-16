#include <stdio.h>

void fun1(int n,int m);

void fun(int n,int m)
{
    if(n<=m)
    {
        printf("%d ",n);
        fun(n+1,m);
    }
    if(n>=m)
    {
        fun1(0,m+1);
    }
}

void fun1(int n,int m)
{
    printf("\n");
    if(m<5)
    {
        fun(0,m+1);
    }
    
}

void main()
{
    fun(0,1);
    printf("\n");
}