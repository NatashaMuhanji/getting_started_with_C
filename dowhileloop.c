//major difference with while loop is program is executed once always even if the condition is false
//it's syntax is do{part to be executed}while(condition), body part is executed as long as condition is true
#include <stdio.h>
int main()
{
    int count = 0;
    do
    {
        printf("%d\n", count);
        count = count + 1;
    } while (count <=5);
    
    return 0;
}