#include <stdio.h>

void fun(char arr[],char a)
{
    int length=0;
    while(1)
    {
        if(arr[length]=='\0')
        {
            break;
        }
        length++;
    }
    if(arr[length-1]==a)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void main()
{
    fun("Madara",'b');
}