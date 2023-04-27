#include <stdio.h>
int main()
{
    int product, number, count;
    count=0;

    printf("Enter the number your number : ");
    scanf("%d", &number);

    while (count<=10)
    {
        product=count*number;
        printf("%d\n", product);
        count=count+1;
    }
    

    return 0;
}