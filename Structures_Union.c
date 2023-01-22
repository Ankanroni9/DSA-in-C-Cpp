#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.454;
    // e1.name = "Harry"; --> wont work
    strcpy(e1.name, "Harry");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);


    struct employee e2 = {100, 34.454, "Harry"};

    printf("Code is %d \n", e2.code);
    printf("Salary is %f \n", e2.salary);
    printf("Name is %s \n", e2.name);

    struct employee e3 = {0};

    printf("Code is %d \n", e3.code);
    printf("Salary is %f \n", e3.salary);
    printf("Name is %s \n", e3.name);

    // Pointer to structure
    struct employee e4;
    struct employee *ptr;

    ptr = &e4;
    e4.salary = 56000;
    printf("Salary is %f \n", (*ptr).salary); //but not *(ptr).salary;
    // arrow operator
    ptr->code = 101;  
    printf("%d\n", e4.code); 


    return 0;
}

//Array of structure
// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// int main(){
//     struct employee facebook[100];

//     facebook[0].code = 100;
//     facebook[0].salary = 100.45;
//     strcpy(facebook[0].name, "Harry");

//     facebook[1].code = 101;
//     facebook[1].salary = 90.45;
//     strcpy(facebook[1].name, "Rohan");

//     facebook[2].code = 102;
//     facebook[2].salary = 110.45;
//     strcpy(facebook[2].name, "Ankan");
//     printf("Done");

//     return 0;
// }

//Structure in function
// #include <stdio.h>

// struct employee
// {
//     int salary;
//     float hike;
//     char name[10];
// };

// void show(struct employee e)
// {
//     e.name[0] = 'P';
//     printf("The name of Employee is %s\n", e.name);
//     printf("The salary of Employee is %d\n", e.salary);
//     printf("The hike of Employee is %f\n", e.hike);
//     e.hike = 4.55;
// }

// void showRef(struct employee *e)
// {
//     (*e).name[0] = 'P';
//     printf("The name of Employee is %s\n", e->name);     //(*e).name
//     printf("The salary of Employee is %d\n", e->salary); //(*e).salary
//     printf("The hike of Employee is %f\n", e->hike);     //(*e).hike
//     (*e).hike = 4.55;
// }

// int main()
// {
//     struct employee harry = {34, 5.2, "Harry"};
//     showRef(&harry);
//     printf("The name of Employee is %s\n", harry.name);
//     printf("The salary of Employee is %d\n", harry.salary);
//     printf("The hike of Employee is %f\n", harry.hike);
//     return 0;
// }

//Typedef
// #include<stdio.h>
// #include<string.h>

// typedef struct employee{
//     int code;
//     float salary;
//     char name[20];
// } emp;

// int main(){
//     emp e1;
//     emp *ptr;

//     ptr = &e1; 

//     ptr->code = 101;
//     ptr->salary = 11.01;
//     strcpy(ptr->name, "Harry"); 
    
//     printf("%d", e1.code); 
    

//     return 0;
// }


//Union
// union abc {
//     int a;
//     int b;
// }var;

// int main(){
//     var.a =65;
//     printf("a = %d\n", var.a);
//     printf("b = %c", var.b);
//     return 0;
// }


//Size of the Union
// union abc{
//     int a;
//     char b;
//     double c;
//     float d;
// };

// int main(){
//     printf("%ld", sizeof(union abc));
//     return 0;
// }
