#include <stdio.h>
#include <string.h>
void fun(char*p)
{
    strcat(p," ");
    int i=0;
    int count=0;
    while(1)
    {
        if(*(p+i)=='\0')
        {
            break;
        }
        if(*(p+i)==' ')
        {
            count++;
        }
        i++;
    }
    printf("%d\n",count);
}


void main()
{
    fun("Madara Uchiha Vs Tobirama Senju");
}

