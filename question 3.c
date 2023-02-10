//Write a program to swap values of two int variables

#include <stdio.h>
int main()
{
int x = 5, y = 10, t;

printf("x is %d and y is %d\n",x,y);

t = x;
x = y;
y = t;

printf("x is %d and y is %d",x,y);

return 0;
}
