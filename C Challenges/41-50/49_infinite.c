// Wap that continusly reads integers from the user and prints theirs squares
// USe infinite loop and a break statement to exit when a special number -1 is enterred

#include <stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("Please enter a number[-1]:");
        scanf("%d", &num);
        if (num == -1)
            break;
        printf("Square of %d is %d\n", num, num * num);
    }
    printf("\nBYe bYE");
    return 0;
}