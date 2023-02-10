//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include <stdio.h>
int main()
{
int x,y;
printf("Enter a number-");
scanf("%d",&x);
y = x%10;
x = x - y;

printf("Number with last digit 0 is %d",x);

return 0;
 }
