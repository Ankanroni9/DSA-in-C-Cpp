#include <stdio.h>
// #include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>

void main()
{
    int f = 4, g, h; // Type declaration instruction
    g = h = f;   //g = f= h -> incorrect

    printf("The value of f is %d\n", f);
    printf("The value of g is %d\n", g);
    printf("The value of h is %d\n", h);

    // float q = p + 8.9; //throws an error
    // float p = 1.1;
    // printf("The value of q is %f\n", q);

//Arithmetic Operator
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a); // address of
    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);   //int/int = int , float /int = float, int/double = double

    // Type Casting
    float g = (float)5 / 3;
    printf("%f", g);
    
    int z;
    z = b * a; // legal
    // b * a = z; // Illegal
    printf("The value of z is: %d\n", z);

// Modular Division
    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);   
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

    // int r, x = 2;
    // float y=5;
    // r= y%x;
    // printf("%d",r);  //throws an error
    // to print '%(percentaage sign)', write %%

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
    printf("The value of 5/2 is %d\n", 5 / 2);
    printf("The value of 3.0/9 is %f\n", 3.0 / 9);

    int x = 2;
    int y = 3;
    printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y);
    printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x);
    printf("The value of 8 * y - y / 3 + 4 * x is %d \n", 8 * y - y / 3 + 4 * x);

    // int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, sol;
    // sol = ((a + b / c * d - e) * (f - g));
    // printf("The solution of the arithmatic expression is : %d", sol);

    int f = 101;
    printf("%d", !f);

// Comma Operator
    int p, q;
    p = (3, 4, 6);
    q = 9, 7, 8;

    printf("%d %d\n", p, q);

    int r1, r2, x1, y1, z1;
    r1 = x1 + y1 + z1, x1 = 3, y1 = 2, z1 = 5;
    r2 = (x1 = 3, y1 = 2, z1 = 5, x1 + y1 + z1);

    printf("%d %d\n", r1, r2);

}