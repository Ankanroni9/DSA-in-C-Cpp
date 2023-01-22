#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
    char str[] = "Ankan"; //char *str ="Ankan";
    // char str[] = {'A', 'n', 'k', 'a', 'n', '\0'};
    // char *ptr = str;
    // while(*ptr!='\0'){
    //     printf("%c", *ptr);
    //     ptr++;
    // }

    char *ptr = "Roni";
    // char ptr[] = "Roni";
    ptr = "Susmit";
    printf("%s\n", ptr);

    // char s[34];
    // printf("Enter your name: ");
    // scanf("%s", s);  //Don't store space or after space words
    // printf("Your name is %s\n", s);

//Gets & Puts
    char p[34];
    printf("Enter your Full name: ");
    gets(p);  //store the full value with space
    puts(p);  //print the entire value placing the cursor on next line 
    
//Strlen    
    char *st = "Roni";
    int a = strlen(st);  //Count the no. of characters excluding the null character
    printf("The length of string st is %d\n", a); 

//Strcpy        
    char *source = "This";
    char target[45];
    strcpy(target, source);  //copy the content of source into target
    printf("Now the st2 is %s\n", target);

//Strcat
    char st1[45] = "Hello";
    char *st2 = "Woman";
    strcat(st1, st2);  //concatenate two strings without space between them
    printf("Now the st1 is %s\n", st1);  // not a space between two strings

//Strcmp    
    char s1[45] = "Hel9";  //\0 's ASCII value 00 
    char *s2 = "Hel9o";
    int val = strcmp(s1, s2);  //compare two strings
    printf("Now the val is %d\n", val);  //returns 0 if they are same, return 1 if first's first mismatching character is greater than the second's first mismatchijng character, otherwise return -1
    printf("%d", strcmp("rent", "tent"));

// //Slice a string
    // #include<stdio.h>
    // void slice(char *st, int m, int n){
    // int i = 0;
    // while((m+i)<n){
    //     st[i] = st[i+m];
    //     i++;
    // }
    // st[i] = '\0';
    // }

    // int main(){
    // char st[] = "Harrysfsdfsdf";
    // slice(st, 1, 6);
    // printf("%s", st);
    // return 0;
    // }


// //Encrypt & Decrypt
    // #include<stdio.h>
    // void encrypt(char *c){
    // char *ptr = c;
    // while(*ptr!='\0'){
    //     *ptr = *ptr + 1;   //Encrypt +, Decrypt - 
    //     ptr++;
    // }
    // }

    // int main(){
    // char c[] = "come to this room";
    // encrypt(c);
    // printf("Encrypted string is: %s", c);
    // return 0;
    // }

//Occurence
    //  #include<stdio.h>
    //  int occurence(char st[], char c){
    //  char *ptr = st;
    //  int count=0;
    //  while(*ptr!='\0'){
    //      if (*ptr==c){
    //          count++;
    //      }
    //      ptr++;
    //  }
    //  return count;
    //  }
    //  int main(){
    //  char st[] = "Harry7777";
    //  int count = occurence(st, '7');
    //  printf("Occurences = %d", count);
    //  return 0;
    //  }

    return 0;
}


// String length
#include <stdio.h>

int strlen1(char *st)
{
    int len = 0;
    while (*st != '\0')
    {
        len++;
        st++;
    }
    return len;
}

int main()
{
    char st[] = "I love you"; // count spaces also
    int l = strlen1(st);
    printf("The length of this string is %d", l);
    return 0;
}

// String reverse
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char string[20], temp;
    int i, n;
    printf("Enter String : ");
    scanf("%s", string);
    n = strlen(string) - 1;
    for (i = 0; i < strlen(string) / 2; i++)
    {
        temp = string[i];
        string[i] = string[n];
        string[n] = temp; // or, string[n--] = temp;
        n--;
    }
    printf("\nReverse string :%s", string);
    getch();
}

// string concatenation
#include <stdio.h>
int main()
{
    char str1[100] = "Geeks", str2[100] = "World";
    char str3[100];
    int i = 0, j = 0;
    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s", str2);
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("\nConcatenated string: %s", str3);
    return 0;
}