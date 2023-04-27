#include <stdio.h>
int main()
{
    //ternary operators are used to replace if else statements in a program to make it look neat
    //it starts with a (test_condition)? then the expressions follow

    int age;
    printf("Enter age:");
    scanf("%d", &age);

    (age>=18)? printf("You can vote") : printf("You cannot vote");

    return 0;
}