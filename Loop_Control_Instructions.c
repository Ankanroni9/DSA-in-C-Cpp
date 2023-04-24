#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>

int main()
{
//While loop
    int i = 0;
    while(i<=20){     //while(i>0) -->infinite loop
        if (i >= 10){ 
        printf("The value of i is %d\n", i);
        }
        i++; // i = i + 1;
    }

//increment & decrement
    int p = 5;
    printf("The value after p++ is %d\n", p++);
    p++; // first print then increment
    ++p; // first increment then print 
    p--; // first print then decrement
    --p; // first decrement then print
    printf("The value of p is %d\n", p);

    p+=10; // Increments p by 10
    printf("The value of p is %d\n", p);

    int z =3;
    printf("%d %d %d\n", z, ++z, z++); //for gcc compiler, order of pass will be from right to left

    //     int x= 128;
    //     printf("n%d",1 + x++);

    int a, a_1, b, c, d;
    a = 8;
    a_1 = a++;
    b = 7 + a++;
    c = b + ++a;
    d = c - a--;
    printf("%d %d %d %d %d", a, a_1, b, c, d);

    // Do- while
    int q = 90; // runs at least once

    do{
        printf("The value of q is %d\n", q);
        q++;
    }while(q <10);

//For loop
    for(int a=0; a<10; a++){  //(initialiize;test;increment or decrement)
        printf("The value of a is %d \n", a+1);
    }

    for(int a1=0; a1<10; ++a1){  
        printf("The value of a1 is %d \n", a1);
    }
    
    for(int b=10; b>0 ; b--){
        printf("The value of b is %d \n", b);
    }

    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for(int c=n; c ; c--){
        printf("The value of c is %d\n", c);
    }

    for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--){
        printf("%d %d\n", a, b);
    }

//Break Statement
    int h = 0;
    do{
        printf("The value of d is %d\n", h);
        h++;
        if(h==4){
            break;
        }
        //h++; //4 also be printed
    }while(h<10);

    for (int l= 0; l <1000; l++){
        printf("The value of l is %d\n", l);
        if (l == 5){
            break;
        }
    }

//Continue Statement
    int skip=5, e=0;
    while(e<10){
        e++;
        if(e!=skip){
            continue;
        }
        else{
            printf("%d\n", e);
        }
    }

    int i1=0;
    while(i1<10){
        i1++;
        if(i1==5){
            continue;
        }
        printf("%.3f\n",(float) i1);
    }

//Scope
    // int main(){
    //     int i = 1; 
    //     // int i = 5;

    //     for(i = 2; ; ){
    //         int a = 7;
    //     }
    //     // a = 6;
    //     return 0;
    // }
    
//infinite loops
    int i=1; 
    for(;;i++)  //(;0;i++), (;-99;i++)
    {
        printf("%d\n", i++);
        if(i>=10)
            break;
    }

//goto
    int i=1;
    while(i<=5)
    {
        printf("%d\n",i++);
        if(i>=3)
            goto xyz;
    }
    xyz:
        printf("I am here");

    return 0;
}
