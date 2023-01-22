//Preprocessor
//#include <stdio.h>   //#include, #define, #undef, #if -> preprocesssor directive

//#include "filename.c"
//C source code ---> Preprocessor ---> Compiler


//Macros
#include <stdio.h> //including stdio.h file
#define PI 3.14159 // PI-> macro name, 3.14 ->macro value or character sequence
#define ME "Ankan Hazra"
#define MUL(a, b) a *b // defining a function
#define max(x, y) if (x > y) \
                    printf("x is max"); \
                else\
                    printf("y is max");

int main()
{
    float a = PI;
    printf("%f\n", a);
    printf("%d\n", MUL(5 - 2, 4 + 3));

    max(4, 5);
    #undef max

    return 0;
}
