#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
//Sizeof operator in C
    // printf("The size of int on my pc is %d\n", sizeof(int));
    // printf("The size of float on my pc is %d\n", sizeof(float));
    // printf("The size of char on my pc is %d\n", sizeof(char));
    
//malloc()    
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i+1, ptr[i]);
    }

    // float *ptr;
    // ptr = (float *)malloc(5 * sizeof(float));
    // ptr[0] = 4.5;
    // ptr[1] = 4.6;
    // ptr[2] = 4.7;
    // ptr[3] = 4.18;
    // ptr[4] = 1.8;
    // printf("%f ", ptr[2]);

//calloc()
    // int *ptr;
    // int n;
    // printf("How many integers do you want to enter:\n");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of %d element: \n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    // }

//free()
    // int *ptr;
    // int *ptr2;
    // ptr = (int *)malloc(600 * sizeof(int));
    // for (int i = 0; i < 600; i++)
    // {
    //     ptr2 = (int *)malloc(600 * sizeof(int));
    //     printf("Enter the value of %d element: \n", i);
    //     scanf("%d", &ptr[i]);
    //     free(ptr2);
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("The value of %d element is: %d\n", i, ptr[i]);
    // }

//realloc()
    // int *ptr;
    // ptr = (int *)malloc(5 * sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value of %d element: \n", i+1);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value of %d element is: %d \n", i+1, ptr[i]);
    // }

    // ptr = realloc(ptr, 10 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value of %d element: \n", i+1);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of %d element is: %d \n", i+1, ptr[i]);
    // }

    return 0;
}