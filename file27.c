#include <stdio.h>

void fun(int n)
{
    if(n<0)
    {
        printf("FUCKOFFF!\n");
    }
    else
    {
        char p[100];
        int i=0;
        int m=0;
        while(n>0)
        {
            m=n%10; 
            p[i]=m+'0';
            n=n/10;
            i++;
        }
        printf("%s\n",p);
    }
}

void main()
{
    //int n=1;
    //char a=n+'0';
    //printf("%c\n",a);
    printf("%d\n",103/10);
    fun(123123123);
}