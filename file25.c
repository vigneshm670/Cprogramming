#include <stdio.h>
#include <stdlib.h>
void fun(int n)
{
    int i=0;
    int pro=1;
    char *p;
    sprintf(p,"%d",n);
    while(1)
    {
        if(*(p+i)=='\0')
        {
            printf("%d\n",pro);
            break;
        }
        int b=*(p+i);
        int c=b-48;
        pro=pro*c;
        i++;
    }
} 

void main()
{
    char a=(char)0;
    fun(11111);
    printf("%c\n",a);
}