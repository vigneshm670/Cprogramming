#include <stdio.h>

void main()
{
    FILE*fp;
    fp=fopen("file03.c","r");
    while(1)
    {
        char ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
}