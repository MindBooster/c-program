#include<stdio.h>
int main()
{
    int ndays,years,weeks,days;
    printf("Enter the number of days=\n");
    scanf("%d",& ndays);
    years=ndays/365;
    weeks=(ndays%365)/7;
    days=(ndays%365)%7;
    printf("%d is equivalent to %d years,%d weeks and %d days",ndays,years,weeks,days);
    return 0;
}