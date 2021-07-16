#include <stdio.h>

int sum(int n)
{
    if(n%2!=0 && n<10)
    {
        return n+sum(n+1);
    }

    if(n%2==0 && n<10)
    {
        sum(n+1);
    }

}

int sum1(int n)
{
    if(n<10 && n%2!=0)
    {
        printf("n=%d\n",n);   
        return n+sum1(n+2);
    }

if(n%2==0 && n<10)
    {
        //printf("   %d\n",n);
        sum1(n+1);
        //printf("Hiiii\n");
    }
}

void main()
{
    printf("%d\n",sum(0));
    printf("%d\n",sum1(9));
}