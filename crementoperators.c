//increment operator ++ is used to increase the value by 1
//decrement operator -- reduces the value by 1
//the operators can be used as prefix/postfix


#include <stdio.h>
int main()
{

int u;
int x;
int y;
int z;

u=12;
x=12;
y=12;
z=12;

printf("prefix increment of ++12 is %d \n", ++u); //the result is 13
printf("prefix decrement of --12 is %d \n", --x); //the result is 11
printf("postfix increment of 12++ is %d \n", y++); //the result is 12
printf("postfix decrement of 12-- is %d \n", z--); //the result is 12

return 0;
}