/*Area of tringle with user input 
with negetive restrictions*/

#include <stdio.h>

int main()
{
    float b, h;
    printf("Enter Height and Base of the tringle::");
    scanf(" %f %f", &h, &b);

    if (b < 0 || h < 0)
    {
        printf("Error!!\nYou entered height or base negetive\nIt cannot be negative ");
        return 1;
    }

    printf("Area of the tringle fo gievn \n\tHeight=%.2f \n\tBase=%0.2f is ::%0.2f", h, b, 0.5 * b * h);

    return 0;
}