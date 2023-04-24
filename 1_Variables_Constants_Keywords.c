#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>

//gcc FileName.c -o FileName.exe
//./FileName.exe 

int main()
{
    printf("Hello World!\n");
    int tom = -1; //or _tom, tom_1 but not 1tom, t@m
    int Tom = 89; //case sensative
    float f1 = -89;
    float f2 = 897.067789;
    char c1 = 'A';//not c1 = "Ant"
    // bool p1 = true;
    // printf(p1);
    printf("ASCII value of c1 is %d\n",c1);
    char c2 [] = "Ankan";
    // printf("%c\n", c2);
    printf("%s\n", c2);
    // printf("%d\n", f1); //return 0
    // not double inverted commas char c2 = "@"  //singleline comment
    printf("%f %d\t%.2f %.3f\t%c\n",(float) Tom, tom, f1, f2, c1);//not single inverted commas
    // Declaring variables to store error codes
    int error_code;
    /*
    This is our first c program
    which is awesome!
    */  //multiline comment

    int c = 4;
    int d = 45;
    int e = 45 + 4;
    int f = c - d;
    printf("subtraction of c and d is %d \n", c - d);
    printf("subtraction of c and d is %d \n", c - d);
    printf("Summation of c and d is %d \n", e - c);

    return 0;
}
