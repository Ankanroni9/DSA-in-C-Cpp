// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
    // int marks[4];
    // marks[0] = 34;
    // marks[1] = 45;
    // marks[2] = 34;
    // marks[3] = 67;

    // int m[4]; // allocate space for 4 integers

    // printf("Enter the value of marks for student 1: ");
    // scanf("%d", &m[0]);
    // printf("Enter the value of marks for student 2: ");
    // scanf("%d", &m[1]);
    // printf("Enter the value of marks for student 3: ");
    // scanf("%d", &m[2]);
    // printf("Enter the value of marks for student 4: ");
    // scanf("%d", &m[3]);

    // printf("Marks are %d %d %d and %d\n", m[0], m[1], m[2], m[3]);

//using loops
    // int marks[5];

    // for(int i=0; i<5; i++)
    // {
    //     printf("Enter the value of marks for student %d: ", i+1);
    //     scanf("%d", &marks[i]);
    //     // printf("The value of marks for student %d is: %d \n", i+1, marks[i]);
    // }

    // for(int i=0; i<5; i++)
    // {
    //     printf("The value of marks for student %d is: %d \n", i+1, marks[i]); 
    // }

//initialization
    // int a[] = {34,232,23};
    // printf("The value of a0 is %d\n", a[0]);
    // printf("The value of a1 is %d\n", a[1]);
    // printf("The value of a2 is %d\n", a[2]);

    // float a[] = {3.4,2.32,2.3};
    // printf("The value of a0 is %f\n", a[0]);
    // printf("The value of a1 is %f\n", a[1]);
    // printf("The value of a2 is %f\n", a[2]);

//Pointer Arithmetic
    // int b = 34;
    // int *ptr = &b;
    // printf("The value of b is %d\n", *(&b)); //*ptr
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // // ptr = ptr + 1;  
    // ptr++; //1*n bytes //generally for int(4), char(1), float(4)
    // ptr++; 
    // printf("The value of ptr is %u\n", ptr);

    // char c = '3';
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 1;
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // float f = 3.4;
    // float *ptr = &f;
    // printf("The value of ptr is %u\n", ptr);
    // ptr = ptr - 1;
    // ptr = ptr + 1;
    // ptr = ptr + 1;
    // ptr++;
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

//Array with pointers
    // int marks1[4];
    // int *ptr1;
    // // ptr1 = &marks1[0];
    // ptr1 = marks1;
    // for(int i1 =0; i1<4; i1++){
    //     printf("Enter the value of marks for student %d: \n", i1+1);
    //     scanf("%d", ptr1);
    //     ptr1++;
    // }

    // for(int i1 =0; i1<4; i1++){
    //     printf("The value of marks for student %d is %d \n",i1+1, marks1[i1]);  
    // }

//Size of Array
//     int n1;
//     printf("Size of the array: ");
//     scanf("%d", &n1);
//     int arr[n1];
//     printf("Created an array of size %lu\n", sizeof(arr) / sizeof(arr[0]));

//     return 0;
// }

// //Arrays to functions
// // #include<stdio.h>

// // // void printArray(int *ptr, int n){
// // //     for(int i=0; i<n; i++){
// // //         printf("The value of element %d is %d\n", i+1, *(ptr+i)); 
// // //     }
// // // }

// // void printArray(int ptr[], int n){
// //     for(int i=0; i<n; i++){
// //         printf("The value of element %d is %d\n", i+1, ptr[i]); 
// //     } 
// //     ptr[2] = 5555; // This value will be changes in arr array of main as well
// // }

// // int main(){
// //     int arr[] = {1,2,3543,34,3,645,23};
// //     printArray(arr, 7);
// //     printf("%d", arr[2]);
// //     return 0;
// // }

// //Multidimensional Array
// //2d Array
// // #include<stdio.h>

// // int main(){
// //     int n_students = 3;
// //     int n_subjects = 5;

// //     int marks[3][5];
// //     for(int i=0; i<n_students; i++){
// //         for(int j=0; j<n_subjects; j++){
// //             printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
// //             scanf("%d", &marks[i][j]);
// //         }
// //     }

// //     for(int i=0; i<n_students; i++){
// //         for(int j=0; j<n_subjects; j++){
// //             printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, marks[i][j]);
// //         }
// //     }

// //     return 0;
// // }

// //3d Array
// // #include <stdio.h>

// // int main()
// // {
// //     int arr[2][3][4];
// //     for (int i = 0; i < 2; i++)
// //     {
// //         for (int j = 0; j < 3; j++)
// //         {
// //             for (int k = 0; k < 4; k++)
// //             {
// //                 printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
// //             }
// //         }
// //     }

// //     return 0;
// // }


// Array reverse
#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is: %d\n", i, arr[i]);
    }
    return 0;
}


// Insertion & Deletion
#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for Insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

void indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 1;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);

    index = 0;
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}
