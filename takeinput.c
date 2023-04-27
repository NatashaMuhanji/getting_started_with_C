#include <stdio.h>
int main()
{
    //we use scanf to accept input in c programming
    //first start by declarig variables
    //then print input message
    //allow iput of data into the variables
    //do not forget the ampersand "&" sign in scanf
    //lastly the printingn results

    int age;
    float weight;
    double height;
    char address;

    printf("Enter your Age please :");
    scanf("%d", &age);

    printf("Enter your Weight in Kgs please :");
    scanf("%f", &weight);

    printf("Enter your Height in cm please :");
    scanf("%lf", &height);

    printf("Enter your address please :");
    scanf("%c \n", &address);

    printf("Your age is %d \n", age);
    printf("Your weight in Kgs is %.2f \n", weight);
    printf("Your height in cm is %.2lf \n", height);
    printf("Your address is %c \n", address);
    
    return 0;
}