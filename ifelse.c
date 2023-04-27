#include <stdio.h>
int main()
{
    //from the file ifcondition.c we used two if statement
    //but one can use the else clause instead
    //if the test condition of the if statement is true then it is executed
    //if statement is not true the else clause is executed

    int age;
    printf("Please enter your age : ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }
    

    return 0;
}