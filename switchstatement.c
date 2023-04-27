//for an operation where we have to choose from multiple options
//a switch statement is advisable
#include <stdio.h>
//syntax, switch(variable/expression), case 1 break; case 2 break;... case n-1 break; default.
//break; exits the case statements once they are executed
int main(){

    int number;
    printf("Enter a number between 1-7 : ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid number input!!");
        break;
    }

    return 0;
}