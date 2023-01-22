#include <stdio.h>

// enum Size
// {    //Integral Constants
//     Small, //value will start from 0
//     Medium,
//     Large,
//     ExtraLarge
// };

// enum Size
// {   Small = 1,
//     Medium,
//     Large,
//     ExtraLarge
// };

enum Size
{   Small=36,
    Medium=38,
    Large=40,
    ExtraLarge=42
} pantSize;

int main()
{
    // enum Size shoeSize;
    // shoeSize = ExtraLarge;
    // printf("%d\n", shoeSize);

    pantSize = Large;
    printf("%d\n",pantSize);

    return 0;
}
