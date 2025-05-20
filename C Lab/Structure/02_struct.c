#include <stdio.h>
struct college
{
    int s_id;
    char s_name[100];
    float s_fee;
    char s_gender;
};
int main()
{
    struct college s1;
    printf("\nEnter Details\n1.Name,2.Id,3.Fee,4.Gender\n");
    scanf("%s %d %f %c", &s1.s_name, &s1.s_id, &s1.s_fee, &s1.s_gender);
    printf("\nName=%s\nId=%d\nFee=%.2f\nGender=%c", s1.s_name, s1.s_id, s1.s_fee, s1.s_gender);

    return 0;
}