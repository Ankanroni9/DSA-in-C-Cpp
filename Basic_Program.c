#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// #include<conio.h>
#include<string.h>

int main(){
//Recursions
#include<stdio.h>
int factorial(int x);

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}

#include <stdio.h>

int addNumbers(int n);

int main()
{

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}

int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
    
//lowercase
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase\n");
    }

    
//largest number without < or >
    int a = 11, b = 5;
    if (a / b)
        printf("a is greater\n");
    else
        printf("b is largest\n");


//leap year
    int y;    
    printf("Enter the year to check: ");
    scanf("%d", &y);
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
    printf("It is a leap year");
    else 
    printf("It is not a leap year");


//multiplication table and sum
    int no,j,mult,sum = 0; 
    printf("Enter the number you wish to multiply: \n");
    scanf("%d", &no); 
    printf("Enter how many times you want to multiply the number: \n");
    scanf("%d", &mult); 
    for(j = 1; j <= mult; j++)
    {
        printf("%d X %d = %d\n", no,j,j*no);
        sum += j*no;
    }
    printf("sum = %d", sum);  


//sum
    int l=1, sum1=0, n1=10;

    while( l<=n1){
        sum1 +=l;
        l++; 
    }

    // for(l=1; l<=n1; l++){
    //     sum1 +=l;
    // }
    printf("The value of sum(1 to 10) is %d\n", sum1);


//Sum without '+' operator
    int x=5, y=6, add;
    for(add = x; y!=0; add++){
        y--;
    } 
    printf("sum is %d", add);

    
//factorial
    int p, n2=7, factorial=1;
    for(p=1;p<=n2;p++){
        factorial *=p;
    }
    printf("The value of factorial %d is %d\n", n2, factorial);



//prime number
    int n3 = 2, prime=1;
    for(int b=2;b<n3;b++){
        if (n3%b==0 ){
            prime = 0;
            break;
        }
    }
    if (prime==0){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }



//swap not using third variable 
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    a = a - b;  
    b = a + b;
    a = b - a; 
  
    printf("After swapping, a = %.2lf\n", a); 
    printf("After swapping, b = %.2lf", b);



//swap using third variable
    double first, second, temp;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);
  
    temp = first;  
    first = second;
    second = temp;  
    printf("\nAfter swapping, first number = %.2lf\n", first);
    printf("After swapping, second number = %.2lf", second);



//quardratic equation 
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c of ax+by+c=0: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("root1 = root2 = %.2lf;", root1);
    }
    else {
    realPart = -b / (2 * a);
    imagPart = sqrt(-discriminant) / (2 * a);
    printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }



//vowel & consonent 
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'I' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if(lowercase_vowel || uppercase_vowel)
    printf("%c is a vowel.",c);
    else
    printf("%c is a consonant.",c);



//vowel & consonent using switch case 
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    switch (ch)
    {
    default:
        printf("Consonant");
        break;

    case 'a':

    case 'e':

    case 'i':

    case 'o':

    case 'u':

    case 'A':

    case 'E':

    case 'I':

    case 'O':

    case 'U':
        printf("Vowel");
        break;
    }


//positive elements in array 
    int arr[100],size,i;

    printf("Enter array size\n");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);

    printf("Positive Elements are\n");
    for(i = 0; i < size; i++){
        if (arr[i]>=0)
            printf("%d ",arr[i]);
    }


//fflush(stdin)
    char st1[34];
    char st2[34];
    char c;
    int i =0;

    printf("Enter the value of first string\n");
    scanf("%s", st1); 
    printf("Enter the value of second string character by character\n");
    
    while(c!='\n'){ 
        fflush(stdin);
        scanf("%c", &c); 
        st2[i] = c;
        i++;
    }
    st2[i-1]= '\0';

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("strcmp for these strings returns %d", strcmp(st1, st2));


//palindrome number 
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);


//armstrong number 
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);


//krishnamurthy number 
    int number, temp, sum, currentDigit, fact;
    printf("Enter an Integer: ");
    scanf("%d", &number);
    temp = number;
    sum = 0;

    while (temp != 0)
    {
        currentDigit = temp % 10;
        fact = 1;

        for (int i = 1; i <= currentDigit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == number)
    {
        printf("%d is Krishnamurthy Number.", number);
    }
    else
    {
        printf("%d is not a Krishnamurthy Number.", number);
    }


//G. C. D. 
    int n1, n2, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
            if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);


//fibonacci series 
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i)
    {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    }


//palindrome of string
    char a[100], b[100];
    printf("Enter the string :");
    gets(a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");


//odd & even
    int num;
    printf("Enter an Integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);


//smallest & largest elements in array
    int a[50], i, n, large, small;
    printf("\nEnter the number of elements: ");
    scanf("% d", &n);
    printf("\nInput the array elements: ");
    for (i = 0; i < n; ++i)
        scanf("% d", &a[i]);

    large = small = a[0];

    for (i = 1; i < n; ++i)
    {
        if (a[i] > large)
            large = a[i];

        if (a[i] < small)
            small = a[i];
    }

    printf("\nThe smallest element is % d\n", small);
    printf("\nThe largest element is % d\n", large);

 

    return 0;
}


//complex number 
#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of Imaginary part is %d\n", c.complex);
}

int main(){
    comp cnums[5];
    for(int i=0; i<5; i++){
        printf("Enter the real value for %d num\n", i+1);
        scanf("%d", &cnums[i].real);

        printf("Enter the complex value for %d num\n", i+1);
        scanf("%d", &cnums[i].complex);
    }
    for(int i=0; i<5; i++){
        display(cnums[i]);
    }
    return 0;
}


//power 
#include <stdio.h>

int power(int a, int b)
{
    int num = 1;
    for (int i = 1; i <= b; i++)
    {
        num *= a;
    }
    printf("%d", num);
}
int main()
{
    power(4, 2);

    return 0;
}


//nCr
#include<stdio.h>

int factorial (int n){
    int fact = 1; 
    for(int i = 1; i <=n ; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans= (factorial(n)/(factorial(r)*(factorial(n-r))));
    return ans;
}

int main(){
    int a = nCr(3, 0);
    int b = nCr(4, 2);

    printf("%d %d\n", a, b);
    return 0;
}


// sum & difference of matrices
int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];
printf("Enter the number of rows and columns of the first matrixn\n");
scanf("%d%d", &m, &n);
printf("Enter the %d elements of the first matrix \n", m *n);
for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);
printf("Enter the %d elements of the second matrix \n", m *n);
for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &second[c][d]);
printf("The first matrix is: \n");
for (c = 0; c < m; c++)
{
        for (d = 0; d < n; d++)
        {
            printf("%d\t", first[c][d]);
        }
        printf("\n");
}
printf("The second matrix is: \n");
for (c = 0; c < m; c++)
{
        for (d = 0; d < n; d++)
        {
            printf("%d\t", second[c][d]);
        }
        printf("\n");
}
for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];
printf("The sum of the two entered matrices is: \n");
for (c = 0; c < m; c++)
{
        for (d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
}
for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];
printf("The difference(subtraction) of the two entered matrices is: \n");
for (c = 0; c < m; c++)
{
        for (d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
}


// transpose of matrix
int a[10][10], transpose[10][10], r, c;
printf("Enter rows and columns: ");
scanf("%d %d", &r, &c);
printf("\nEnter matrix elements:\n");
for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
printf("\nEntered matrix: \n");
for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d ", a[i][j]);
            if (j == c - 1)
            printf("\n");
        }
for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
printf("\nTranspose of the matrix:\n");
for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            printf("%d ", transpose[i][j]);
            if (j == r - 1)
            printf("\n");
        }


// vector
#include <stdio.h>

struct vector
{
        int x;
        int y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
        struct vector result;
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y;
        return result;
}
int main()
{
        struct vector v1, v2, sum;
        v1.x = 4;
        v1.y = 9;
        printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

        v2.x = 5;
        v2.y = 4;
        printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

        sum = sumVector(v1, v2);
        printf("X dim of result is %d and Y dim is %d\n", sum.x, sum.y);
        return 0;
}

// Decimal to Binary
#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter decimal value");
    scanf("%d", &n);

    int ans = 0, i = 0;

    while (n != 0)
    {
        int bits = n & 1;
        ans = (bits * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    printf("Binary is %d\n", ans);

    return 0;
}

//Decimal to Binary('-'ve)
#include <stdio.h>

int main(void)
{
    int i = 0;
    unsigned int u_i = 0;
    int j = 0;
    int b[16] = {0}; 

    printf("input number");
    scanf("%d", &i);

    u_i = (unsigned int)i;

    for (j = 15; j >= 0; j--)
    {
        b[j] = u_i & 0x1;
        u_i = u_i >> 1;
    }

    for (j = 0; j <= 15; j++)
        printf("%d", b[j]);

    printf("\n");
    return 0;
}

//Binary to Decimal
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter binary value");
    scanf("%d", &n);

    int ans = 0, i = 0;

    while (n != 0)
    {
        int digits = n % 10;
        if( digits == 1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }
    printf("Decimal is %d\n", ans);

    return 0;
}
