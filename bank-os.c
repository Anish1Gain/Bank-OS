#include <stdio.h> 
int amount=1000, deposit, withdraw;
int pin, choice, x; 
char transaction ='y'; 
int main()
{
//this is a while loop to check for the correct pin//
while (pin != 123) 
{
printf("Input pin\n");
scanf("%d", &pin);
if (pin != 123) 
printf("Invalid pin\n");
}
do
{
printf("Welcome to ATM services\n");
printf("1. Balance Checking\n");
printf("2. Cash Withdrawal\n");
printf("3. Cash Deposition\n");
printf("4. Exit\n");
printf("Choose the operation to be performed\n");
scanf("%d", &choice);
switch (choice)
{
//balance checking case//
case 1:
printf("The account balance is %d\n", amount);
break;
//cash withdraw case//
case 2:
printf("Insert the amount to be withdrawn\n");
scanf("%d", &withdraw);
//withdraw not possible if the amount is more than balance in account//
if (withdraw >amount)
{
printf("You are having an insufficient balance\n");
}
else
{
amount = amount - withdraw;
printf("You can now collect the cash\n"); 
printf(" The current balance is %d\n", amount);
}
break;
//cash deposit case//
case 3:
printf("Insert the amount to be deposited\n");
scanf("%d", &deposit);
amount = amount + deposit;
printf("The balance is %d\n", amount); 
break;
//exit case//
case 4:
printf("Thank you for using our ATM services.\n");
break;
}
//Further transaction loop//
printf("Would you like to have another ATM transaction?(y for yes / n for no): \n");
fflush(stdin);
scanf("%c", &transaction);
if (transaction == 'n')
x = 1;
} while (!x);
printf("Thank you so much for your time to choose The our ATM services\n");
}