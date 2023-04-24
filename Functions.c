//Functions
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void display(); // Function prototype

void display(){ // Function definition   
    printf("This is display\n"); 
}

int main()
{
    int a;
    printf("Initializing display function\n");
    display(); // Function Call
    printf("Display function finished its work\n");
    return 0;
}



//Function Inside Function 
// #include<stdio.h>
// void goodMorning();
// void goodAfternoon();
// void goodNight();

// int main(){
//     goodMorning();
//     return 0;
// }

// void goodMorning(){
//     printf("Good Morning Harry\n");
//     goodAfternoon();
// }

// void goodAfternoon(){
//     printf("Good Afternoon Harry\n");
//     goodNight();
// }

// void goodNight(){
//     printf("Good Night Harry\n");
// }

//Parameter(a,b) , Arguments(2,15) & Return Value
// #include<stdio.h>

// int sum(int a, int b); 

// int main(){
//     int c;
//     c = sum(2, 15); 
//     printf("The value of c is %d\n", c);
//     return 0;
// }

// int sum (int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }

//Address will not be same
// #include<stdio.h>

// void printAdd(int a){
//     printf("The address of variable a is %u\n", &a);
// }

// int main(){
//     int i = 4;
//     printf("The value of variable i is %d\n", i);
//     printAdd(i);
//     printf("The address of variable i is %u\n", &i);
//     return 0;
// }

//Recursions
// #include <stdio.h>

// int addNumbers(int n);

// int main()
// {

//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     printf("Sum = %d", addNumbers(num));
//     return 0;
// }

// int addNumbers(int n)
// {
//     if (n != 0)
//         return n + addNumbers(n - 1);
//     else
//         return n;
// }
