//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
//and convert it into USD.

#include <stdio.h>
int main()
{
float USD,INR=0;

printf("Enter the Amount in INR to convert it into USD:-");
scanf("%f",&INR);

USD = INR/76.23;

printf("The amoun in USD is %f",USD);

return 0;
}
