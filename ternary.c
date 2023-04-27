//as ternary can be use in place of if else
//it can also be used to store variables
#include <stdio.h>
int main(){
    char operator='+';
    int num1, num2, result;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    result=(operator == '+')? (num1+num2) : (num1-num2);
    //if the ternary condition is true, then the first part is executed otherwise the second one is executed
    printf("The result is: %d", result);

    return 0;
}