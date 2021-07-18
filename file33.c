#include <stdio.h>
#include <string.h>
void fun(char*p,char*p1)
{
    int count=0;
    while(1)
    {
        if(*(p+count)=='\0')
        {
            printf("%d\n",count);
            break;
        }
        count++;
    }
    int i=0;
    char *p2="\0";
    while(*p1=='\0')
    {
        /*if(*p1=='\0')
        {
            printf("ffff");
            printf("%ld\n",strlen(p2));
            break;
        }*/
        i++;
        *p2=*p1;
        p1++;
        p2++;
        
    }
    puts(p2);
}

void main()
{
    
    fun("Madara","Uchiha");
}