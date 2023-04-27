// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char operator;
    double result, num1, num2;
    
    printf("Enter your calculation : ");
    scanf("%lf %c %lf", &num1, &operator, &num2);
    
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
    
    printf("Your result is : %.4lf", result);
    
    return 0;
}