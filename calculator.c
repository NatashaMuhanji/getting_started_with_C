//this is a basic calculator
#include <stdio.h>
int main(){

    char operator;
    double result, num1, num2;

    printf("  +  -  *  /  \nEnter an operation from the options above; \t");
    scanf("%c", &operator);

    printf("Enter your first number: ");
    scanf("%lf", &num1);

    printf("Enter your second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result= num1+num2;
        break;
    case '-':
        result= num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2; 
        break;    
    default:
        printf("Invalid operation entry!!\n");
        break;
    }

    printf("Your result is : %.2lf", result);
    
    return 0;
}