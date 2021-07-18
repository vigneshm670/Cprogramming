#include <stdio.h>
#include <string.h>
// void fun(char arr[][])
// {

// }

void main()
{
    char ch[][10]={
                              
                              "Hashirama",
                              "Madara",
                              "Tobirama"
                   };
    printf("%s\n",*(ch+1));
    //printf("%d\n",strcmp("Madara",""));
    char *p[3]={    
                              "Hashirama",
                              "Madara",
                              "Tobirama"
               };
    printf("%s\n",*(p+1));
}