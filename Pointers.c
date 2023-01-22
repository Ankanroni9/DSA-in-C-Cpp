#include<stdio.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    
    printf("The value of j is %d\n", *(&j));
    printf("The address of j is %u\n", &j);

    int a = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &a;
    ptr_ptr= &ptr;

    printf("The value of a is %d", **ptr_ptr);
    return 0;
}

//Call by value
// #include <stdio.h>
// int sum(int a, int b);
// int main()
// {
//     int x = 4, y = 7;
//     printf("The value of x and y is %d and %d\n", x, y);
//     printf("The value of 4+7 is %d\n", sum(x, y));
//     printf("The value of x and y after function call is %d and %d\n", x, y);
//     return 0;
// }
// int sum(int a, int b)
// {
//     int c;
//     c = a + b;
//     b = 3434;
//     a = 23432;
//     return c;
// }

//Call by reference
// #include<stdio.h>
// void wrong_swap(int a, int b);
// void swap(int *a, int *b);

// int main(){
//     int x=3, y=4;
//     printf("The value of x and y before swap is %d and %d\n", x, y);
//     //wrong_swap(x, y); // will not work due to call by value
//     swap(&x, &y); // will work due to call by reference
//     printf("The value of x and y after swap is %d and %d\n", x, y);

//     return 0;
// }

// void wrong_swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

//Array of Pointers
// #include <stdio.h>

// const int MAX = 3;

// int main()
// {

//     int var[] = {13, 65, 21};
//     int *ptr[MAX];

//     for (int i = 0; i < MAX; i++)
//     {
//         *(ptr + i) = (var + i); // ptr[i] = &var[i]; 
//     }

//     for (int i = 0; i < MAX; i++)
//     {
//         printf("Value of var[%d] = %d\n", i, *ptr[i]);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char *s[] = {"Ankan", "Hazra", "Roni"};

//     printf("%s\n", *s+1);
//     printf("%s\n", *(s+1));
//     printf("%s\n", *(s+2)+1);
// }
