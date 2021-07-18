#include <stdio.h>

void fun(char *p)
{
    int i=0;
    while(1)
    {
        if(*(p+i)=='\0')
        {
            break;
        }
        int x1=*(p+i);
        int x2=x1-32;
        char x3=(char)x2;
        printf("%c",x3);
        for(int j=0;j<i;j++)
        {
            printf("%c",*(p+i));
        }
        printf("-");
        i++;
    }
}

void main()
{
    fun("abcdefgh");
    printf("\n");
}