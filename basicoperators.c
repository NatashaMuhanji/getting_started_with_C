//operators are special symbols used to perform operations on values and variables
// '=' this is an assignment operator, assigns value to a variable
//arithmatic operators + - * / %(Remainder/modulus) ++ --
//when using the division operator it is best to use double data type for precision of the results
//when using multple operators, presidence and associativity is considered (BODMAS)
 #include <stdio.h>

int main()
{
    
    int x;
    double y;
    double z;
    int result1;
    double result2;
    double result3;
    int result4;
    //****int result5;
    
    x=12;
    y=10.6;
    z= 2.6;
    result1 = x + 8; //this is the addition operator
    result2 = y - 0.6; //this is a subtraction operator
    result3 = y/z; //this is a dividion operator
    result4 = 12%5; //this is a modulus or remainder operator
    //****result5 = x + 20 - 6 * 3 + x / 2 //these are multiple operators using bodmas

    printf("Result 1 is %d \n", result1); //the result is 20
    printf("Result 2 is %.2lf \n", result2); //the result is 10.00
    printf("Result 3 is %.4lf \n", result3); //the result is 4.0769
    printf("Result 4 is %d \n", result4); //the result is 2 which is the remainder from 12 divided by 5
    //****printf("Result 5 is %d \n", result5); //the result 

    return 0;
}