//Write a program to swap values of two int variables without using a third variable

#include <stdio.h>
int main()
{ int x = 5,y = 10;
printf("x is %d and y is %d",x,y);

x = x+y;
y = x-y;
x = x-y;

printf("\nx is %d and y is %d",x,y);

return 0;

}
