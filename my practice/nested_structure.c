#include <stdio.h>
#include <string.h>
typedef struct Employeee
{
    int id;
    char name[10];
    struct clg
    {
        char clg_name[10];
        float cgpa;
    } c1;

} E;

int main()
{
    E E1;
    E1.id = 1;
    strcpy(E1.name, "shri");
  
    E1.c1.cgpa = 8.9;
    strcpy(E1.c1.clg_name, "dbit");

    printf("id is %d\n", E1.id);
    printf("name is %s\n ", E1.name);
    printf("clg name is %s\n ", E1.c1.clg_name);
    printf("clg pointer is %f\n",E1.c1.cgpa);
    return 0;
}