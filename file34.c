#include <stdio.h>

void fun(int n)
{
    char p[10];
    sprintf(p,"%d",n);
    printf("%s\n",p);
    printf("%c\n",p[0]);
}

void main()
{
    fun(100);
}