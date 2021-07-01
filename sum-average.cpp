#include<stdio.h>
int main ()
{
    float a1,a2,a3,a4,a5,sum,average;
    printf("Enter the fisrt number=\n");
    scanf("%f",&a1);
    printf("Enter the second number=\n");
    scanf("%f",&a2);
    printf("Enter the third number=\n");
    scanf("%f",&a3);
    printf("Enter the forth number=\n");
    scanf("%f",&a4);
    printf("Enter the fifth number=\n");
    scanf("%f",&a5);
    sum=a1+a2+a3+a4+a5;
    average=sum/5;
    printf("The sum of five numbers=%f\n",sum);
    printf("The average of the five numbers=%f",average);
    return 0;
    
}