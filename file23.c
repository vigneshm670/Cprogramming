#include <stdio.h>

void fun(char*p)
{
    int i=0;
    int c1=0,c2=0;
    while(1)
    {
        if(*(p+i)=='\0')
        {
            break;
        }
        if(*(p+i)=='x')
        {
            c1++;
        }
        if(*(p+i)=='o')
        {
            c2++;
        }
        i++;
        
    
    }
    if(c1==c2)
    {
        printf("True     %d     %d\n",c1,c2);
    }
    else
    {
        printf("False   %d    %d  \n",c1,c2);
    }
}

void main()
{ 
    //char *n="Madara";
    //printf("%c\n",*(n+1));
    fun("Madara");
}