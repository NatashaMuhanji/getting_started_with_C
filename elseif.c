#include <stdio.h>
int main()
{
    //in if else clause, one needs to make a decision from one condition
    //but if conditions are more, else if clause is used
    //interestingly, one can add as much else if statements they want but only one block is executed

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age>12 || age<0)
    {
        printf("Invalid age Entry");
    }
    else if (age>=18)
    {
        printf("You can vote!");
    }
    
    else
    {
        printf("You are underage to vote");
    }
    
    
    
    

    return 0;
}