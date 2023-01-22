#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
    // FILE *ptr;
    // ptr = fopen("sample.txt", "mode");
    //r = for reading, rb = for reading in binary, w = for writing, wb = for writing in binary, a = for append

//reading a file    
    FILE *p;
    int num1;
    int num2;
    p = fopen("sample1.txt", "r");
    if (p == NULL){
        printf("This file does not exist\n");
    }
    else{ 
        fscanf(p, "%d", &num1);
        fscanf(p, "%d", &num2);
        fclose(p);
        printf("The value of num is %d\n", num1);
        printf("The value of num2 is %d\n", num2);
    }

//writing a file
    FILE *fptr;
    int number = 45;
    fptr = fopen("sample2.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf");
    fclose(fptr);

//fputc & fgetc
    FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    fputc('c', ptr);
    fputc('c', ptr);
    fputc('c', ptr);
    fclose(ptr);

//EOF
    // FILE *ptr;
    // char c;
    // ptr = fopen("getcdemo.txt", "r");
    // c = fgetc(ptr);
    // while(c!=EOF){
    //     printf("%c", c);
    //     c = fgetc(ptr);
    // }

//Content Copy
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// int main()
// {
//     FILE *fp1, *fp2;
//     char ch;

//     fp1 = fopen("Sample.txt", "r");
//     fp2 = fopen("Output.txt", "w");

//     ch = fgetc(fp1);

//     while(ch != EOF){
//         fputc(ch, fp2);
//         ch = fgetc(fp1);
//     }

//     printf("File copied Successfully!");
//     fclose(fp1);
//     fclose(fp2);
//     return 0;
// }

    return 0;
}