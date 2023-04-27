#include <stdio.h>
int main()
{
    //aids in making decision making programs that perform tasks under certain conditions
    //its synatx starts with an 'if' followed by a test conditions wich are boolean expressions
    //example: if (test_condition), if the test condition is true then its body is executed otherwise skipped
    
    //suppose a program for voting that prints if you are eligible to vote or not depending on your age

    int age;

    printf("Enter your age please :");
    scanf("%d", &age);

    if (age >= 18)
    {
       printf("✔ You are eligible to vote");
    }
    
    if (age < 18)
    {
        printf("X!! Sorry, you are not eligible to vote!");
    }
    

    return 0;
    }