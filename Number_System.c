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
