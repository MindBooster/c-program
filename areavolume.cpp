#include<stdio.h>
int main()
{
    float a,area,volume;
    printf("Enter the lenght of the side of a cube\n");
    scanf("%f",&a);
    area=6*a;
    volume=a*a*a;
    printf("The area of the givrn cube is=%f\n",area);
    printf("The volume of the given cube is=%f",volume);
    return 0;
}