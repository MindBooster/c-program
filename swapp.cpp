#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);

    printf("before swaping; a=%d and b=%d\n",a,b);
    
    int temp;
    temp=a;
    a=b ;
    b=temp;

    printf("After wapping ; a=%d and b=%d\n",a,b);
    return 0;

}

