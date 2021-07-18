#include <stdio.h>

void main()
{
    char *p[4]={
                          "NarutoUzumaki",
                          "SasukeUchiha",
                          "KakashiHatake",
                          "SakuroHaruno"
                };

    for(int i=0;i<4;i++)
    {
        for(int j=0;*(*(p+i)+j)!='\0';j++)
        {
            printf("%c",*(*(p+i)+j));
        }
        printf("\n\n");
    }       

}