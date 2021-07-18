#include <stdio.h>

void fun(char*p)
{
    int n,m;
    m=sscanf(p,"%d",&n);
    printf("%d\n",n);
}

char *fun1(char *p)
{
    return p;
}

char *fun2(int n)
{
    char p[4];
    sprintf(p,"%d",n);
    return p;
}

void main()
{
    fun("123");
    printf("%s\n",fun2(1000));
}