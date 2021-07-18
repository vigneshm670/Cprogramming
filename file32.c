#include <stdio.h>
#include <string.h>

void main()
{
    char *p="Madara";
    printf("%ld\n",strlen(p));
    char a =*(p+2);
    //printf("%s\n%ld\n",p,strlen(p));
    printf("%c\n",a);
}