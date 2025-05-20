#include <stdio.h>

int main()
{
    // Need marks of 5 students
    // int mark_01, mark_02, mark_03, mark_04, mark_05;
    // mark_01 = 45;
    // mark_02 = 93;
    // mark_03 = 92;
    // mark_04 = 232;
    // mark_05 = 22;

    int marks[5];
    // marks[0] = 45; // Counting starts from 0 in C
    // marks[1] = 93;
    // marks[2] = 92;
    // marks[3] = 932;
    // marks[4] = 22;
    // Accessing elements
    printf("Enter Marks of Roll 1 \n");
    scanf("%d", &marks[0]); // input first value //marks 0 behaves as a integer
    printf("The Marks of Roll 1 is::%d\n", marks[0]);
    return 0;
}