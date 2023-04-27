#include <stdio.h>
int main()
{
    //program that checks if a number is positive or negative

    double number;

    printf("Enter the number : ");
    scanf("%lf", &number);

    if (number>0)
    {
        printf("This is a positive number.");
    }
    else if (number<0)
    {
        printf("This is a negative number.");
    }
    else
    {
        printf("This number is 0");
    }
        
    
    return 0;
}