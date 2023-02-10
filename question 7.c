//Write a program to check whether the given number is even or odd using a bitwise operator

#include <stdio.h>
int main()
{
int x;

printf("Enter a Number-");

scanf("%d",&x);

(x&1)? printf("Given number %d is odd",x): printf("Given number %d is Even",x);

return 0;
}
