/*
 * C Program to Display the ATM Transaction
 */
#include <stdio.h>

unsigned long amount=100000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';

void main()
{
	while (pin != 2204143)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 2204143)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("**********WELCOME TO ATM SERVICE**********\n");
		printf("Press 1 to check Balance\n");
		printf("Press 2 to Withdraw Cash\n");
		printf("Press 3 to Deposit Cash\n");
		printf("Press 4 to Quit\n");
		printf("******************?**************************?*\n\n");
		printf("PRESS THE NUMBER OF YOUR CHOICE: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN KES : %lu:", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS: %lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS: %lu", amount);
			break;
		case 4:
			printf("\n THANK U USING ATM");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
