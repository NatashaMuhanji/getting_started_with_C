//while loop in c is used to repeat a block of code a certian number of times
//suppose you want to write a certain message a hundred times, this is used
//syntax while (condition written here){part that is ececuted here}
//the condition is of boolean nature, if it returns true then it is executed on and on until the condition returns false now the code is skipped
//there are infinite while loops that run until there's no enough memory left
#include <stdio.h>
int main()
{
    //this is where a loop prints until the condition is true
    int count;
    count=1;
    
    while (count<5)
    {
        printf("The count is %d, less than 5!\n", count);
        count=count+1;
    }
    

    return 0;
}