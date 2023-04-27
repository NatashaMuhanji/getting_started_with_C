#include <stdio.h>
#include <stdbool.h>
int main()
{
    //boolean is a data type that can only store two variables, true or false
    //while using boolean data type, one must import a header file *#include <stdbool.h>
    //bool type variable does not have a format specifier to print
    //it uses %d, of int data type
    //1 is true, 0 is false, !!do not use caps T and F in true and false

    bool value1 = true;
    bool value2 = false;

    printf("%d \n", value1);
    printf("%d \n", value2);

    //coparison operators and logical operators that are used to create boolean expressions that return boolean values
    //comparison operators, greater than > and less than <, greater than or equal to >= and less than or equal to <=
    //equal to == and not equal to !=

    bool value3 = (12.98 > 9.128);
    printf("%d \n", value3);
    
    bool value4 = (12 <= 9);
    printf("%d \n", value4);
    
    bool value5 = (12 != 9);
    printf("%d \n", value5);

    //comparison between variables
    int int1 = 12;
    int int2 = 9;
    bool value6 = (int1 == int2);
    printf("%d \n", value6);

    //logical operators they include &&AND ||OR !NOT
    int age = 23;
    double weight = 64.5;
    bool result7 = (age > 21) && (weight > 61); //returns true1 when both expressions are true
    printf("%d \n", result7);

    bool result8 = (age >= 21) || (weight < 61); //returns true 1 when either statement is true
    printf("%d \n", result8);

    bool result9 = !(age < 21);
    printf("%d \n", result9); //returns true1 only when the statement/expression is false and uses one expression

    //boolean expressions are used in loops and help in making a decision

    return 0;
}