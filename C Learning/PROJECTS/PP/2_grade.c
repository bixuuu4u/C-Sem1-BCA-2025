/*
Description:
Create a program that calculates the final grade for a student based on their scores in different subjects. The program will prompt the user to enter the scores for a set of subjects, calculate the average score, and then determine the grade based on the average score.
*/
/*

1-The program should prompt the user to enter the scores for three subjects.
2-The program should calculate the average score.
3-The program should determine the grade based on the average score using the following criteria:
A: 90 - 100
B: 80 - 89
C: 70 - 79
D: 60 - 69
F: below 60
4-The program should display the average score and the corresponding grade.
//////////////Used %.2lf to format the scores and average score to two decimal places.
*/
#include <stdio.h>
int main()
{
    double phyNum, chemNum, mathNum, engNum, itNum, odiaNum;
    printf("Enter the numbers you scored in physics::");
    scanf("%lf", &phyNum);
    printf("Enter the numbers you scored in chemistry::");
    scanf("%lf", &chemNum);
    printf("Enter the numbers you scored in Maths::");
    scanf("%lf", &mathNum);
    printf("Enter the numbers you scored in English::");
    scanf("%lf", &engNum);
    printf("Enter the numbers you scored in It::");
    scanf("%lf", &itNum);
    printf("Enter the numbers you scored in Odia::");
    scanf("%lf", &odiaNum);

    double avarage_score = (phyNum + chemNum + mathNum + engNum + itNum + odiaNum) / 6;
    printf("Your numbers \n PHYSICS:: %.2lf\n CHEMISTRY::%.2lf \n MATHS:: %.2lf \nENGLISH::%.2lf \n IT::%.2lf \n ODIA::%.2lf \n", phyNum, chemNum, mathNum, engNum, itNum, odiaNum);
    printf("Your avarage score is:: %.2lf", avarage_score);

    if (avarage_score >= 90 && avarage_score <= 100)
    {
        printf("Your grade is A\nWell Done CHAMP");
    }
    else if (avarage_score >= 80 && avarage_score <= 89)
    {
        printf("Your grade is B\nGood job!");
    }
    else if (avarage_score >= 70 && avarage_score <= 79)
    {
        printf("Your grade is C\nNice effort, but there's room for improvement.");
    }
    else if (avarage_score >= 60 && avarage_score <= 69)
    {
        printf("Your grade is D\nYou passed, but you should study more.");
    }
    else if (avarage_score < 60)
    {
        printf("Your grade is F\n You failed. Better luck next time.");
    }

    return 0;
}