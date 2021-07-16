#include <stdio.h>
#include <string.h>

struct struct01
{
    char name[50];
    int age;
    int salary;
}person1;

void main()
{
    //person1 obj1,obj2;
    strcpy(person1.name,"HashiramaSenju");
    person1.age=30;
    person1.salary=25000;

    printf("%s\n",person1.name);
    printf("%d\n",person1.age);
    printf("%d\n",person1.salary);
}