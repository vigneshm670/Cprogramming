#include <stdio.h>

void fun(int a,int b)
{
    int i=a;
    int sum=0;
    while(1)
    {
        if(i>b)
        {
            //printf("%d\n",sum);
            break;
        }
        sum+=i;
        i++;
    }
    if(sum==a+b)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void main()
{
    fun(1,1);
    fun(1,10);
}