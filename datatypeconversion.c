//In data type conversion, a lower data type is converted to the higher one
//for instance an int data type is converted to a double and a char is converted to an int
//char is the lowest datatype and is usually promoted to a higher data type
//from the highest to the lowest
//long double->double->float->long->int->short->char
//sometimes data types on a higher level can be demoted to a low level as the right value is always converted to the left value
//for instance
#include <stdio.h>
int main()
{
    int a = 5.67;
//the program only reads this as 5 as an int data type and assumes .67 as the double
//this is an IMPLICIT type of conversion
//another type of conversion is the EXPLICIT, where a data is forcefully converted to another type
//for instance
double a = 5.67;
int b =9;
double result = (int)a + b;
printf("%lf", result);
//the result is 14.000 as the int in the result equation converts the double into int but the result is a double then gives 14.0000 rather than 14
//this is similar to adding two same data type but different result data type
//for instance
int a = 10;
int b = 3;
double result = a / b;
//the result will be 3.0000 instead of 3.333 but to get this result one can use the explicit type of conversion
return 0;
}