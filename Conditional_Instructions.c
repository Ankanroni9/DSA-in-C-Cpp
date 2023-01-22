#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>

int main(){
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a); 
    }

    int o = 7;
    if (false)
        printf("hello");

        printf("bye");

    bool v = true;
    //      if (v = true)
    if (v)
        printf("Hi\n");
    if (!v)
        printf("Bye\n");

    v = false;
    bool vi = v ? true : false;
    if (vi)
        printf("vi1\n");
    else
        printf("vi2\n");

// Relational Operators
    int age1;
    printf("Enter your age1\n");
    scanf("%d", &age1);
    
    if(age1>=90){
        printf("age is above 90\n");
    }
    else{
        printf("age is under 90\n");
    }


    if(age1==50){  //In C, all non zero items are true, = for assigment, == for equality check
        printf("Half Century\n");
    }

//Logical Operators
    int age2;
    int special;

    printf("Enter age2\n");
    scanf("%d", &age2); 

    if ((age2 <= 70 && age2>=18) || !(special==0))
    {
        printf("Age is under 70 and above 18 or special\n");
    }
    else
    {
        printf("Age is above 70 and under 18\n");
    }

//If-Else If-Else Ladder
    int num;

    printf("Enter your number\n");
    scanf("%d", &num);

    if(num==1){
        printf("Your number is 1\n");
    }
    else if (num == 2)
    {
        printf("Your number is 2\n");
    }
    else if (num == 3)
    {
        printf("Your number is 3\n");
    }
    else{
        printf("Its not 1, 2 or 3!\n");
    }

//Ternary Operators
    int p;
    printf("Enter p\n");
    scanf("%d", &p);
    // One liner
    (p < 5) ? printf("p is less than 5\n") : printf("p is not less than 5\n");

//Switch-Case Control Instruction
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch(rating)
    {
        case 1:
            printf("Your rating is 1\n");
            break;
        case 2:
            printf("Your rating is 2\n");
            break;
        case 3:
            printf("Your rating is 3\n");
            break;
        case 4:
            printf("Your rating is 4\n");
            break;
        case 5:
            printf("Your rating is 5\n");
            break;
        default :
            printf("Invalid rating!\n");
            break;
    }

    char ch = '1';
    int num1 = 1;

    switch (ch)
    {
    case 1:
        printf("one\n");
        break;
    case '1':
        printf("one in char\n");
        switch (2*num1)
        {
        case 2:
            printf("one\n");
            break;
        }
    default:
        break;
    }

    int q =10;
    if (q=11)
        printf("I am 11\n");  

    else
        printf("I am not 11\n");

    // float d = 5.5; // float, double, string not support in switch
    // switch (d)
    // {
    // case 5.5:
    //     printf("yes");
    //     break;
    // case 4.5:
    //     printf("No");
    //     break;
    // default:
    //     printf("no match");
    // }

    int num2 = 2;
    while (1)
    {
        switch (num2)
        {
        case 2:
            printf("two\n");
            break;
        }
        exit(0);
    }

    return 0;
}