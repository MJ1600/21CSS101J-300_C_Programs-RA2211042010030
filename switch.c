#include<stdio.h>  
int main( )
{
int a, b, choice;
printf(“\nEnter Two Numbers: ”);  
scanf(“%d %d”, &a,&b);

printf(“\n Enter 1 for Addition”);
printf(“\n Enter 2 for Subtraction”)
printf(“\n Enter 3 for Multiplication”);
printf(“\n Enter 4 for Division”);

printf(“ Enter your Choice”);  
scanf(“%d”,&choice);
switch (choice)
{
case 1:
printf(“Sum is : %d”, a+b);  break;
case 2:
printf(“Difference is : %d”, a-b);  break;
case 3:
printf(“Multiplication is : %d”, a*b);  break;
case 4:
printf(“Difference is : %d”, a/b);  break;
    default:
printf(“Invalid Choice:”);
}
getch( );
}
