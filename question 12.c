//Write a program to take a three digit number from the user and rotate its digits by
//one position towards the right.

#include <stdio.h>
int main()
{
int x;

printf("Enter a 3 digit number to roatate:-");
scanf("%d",&x);

x = (x%10)*100 + x/10;

printf("Number after rotating its digit one position towards right is %d",x);

return 0;
}





