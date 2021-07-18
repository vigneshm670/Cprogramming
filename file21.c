#include <stdio.h>

void fun(int n)
{
    int i=0;
    float sum=0;
    float x=0;
    while(1)
    {
        
        if(i>=n)
        {
            printf(" = %f",sum);
            break;
        }
        x=i*3+1;
        sum+=1/x;

        printf("1/%f",x);
        if(i<n-1) 
        {
            printf("+");
        }
        i++;
    }
}

void main()
{
    fun(5);
    printf("\n");
}