#include <stdio.h>

int sum(int n)
{
    if(n<10)
    {
        return sum(n+1) + n;
    }   
}

void main()
{
    printf("%d\n",sum(0));
}
