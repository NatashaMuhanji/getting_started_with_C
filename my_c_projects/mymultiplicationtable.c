//a program that prints out a multiplication table of the number you input until *15
#include <stdio.h>
int main()
{
    int count;
    double product, number;

    count=0;
    printf("Enter the number you wish to have the multiplication table for : ");
    scanf("%lf", &number);

    while (count <= 15)
    {
        product=count*number;
        printf("%d * %.2lf = %.2lf\n", count, number, product);
        count=count+1;
    }

    return 0;
}