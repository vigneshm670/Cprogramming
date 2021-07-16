#include <stdio.h>

struct struct01
{
    char a[10];
    int name;
    int salary;
}obj;

void main()
{
    scanf("%s",obj.a);
    scanf("%d",&obj.name);
    scanf("%d",&obj.salary);


    printf("%s  %d   %d \n",obj.a,obj.name,obj.salary);

}
