#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// #include<conio.h>
#include <string.h>

int main(int num, char *arr[])
{
    if (num == 2)
    {
        printf("Hello, %s\n", arr[1]);
        printf("Hello, %s\n", arr[0]);

        printf("Hello, ");
        for (int n = strlen(arr[1]), i = n; i >= 0; i--)
        {
            printf("%c", arr[1][i]);
        }
        printf("\n");

        return 0;
    }
    else
    {
        printf("Hello, anonyomous\n");
        return 1;
    }
}