//there are cases where the break in the case statement are not necessary
#include <stdio.h>
int main(){

    int number;
    printf("Enter a number between 1-7 : ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
    case 7:
        printf("Weekdend");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday");
        break;
    default:
        printf("Invalid number input!!");
        break;
    }

    return 0;
}