/*WAP manudrien program perform following task using diffrent function category
1:prime
2:palindrome
3:reverse
4:print Even number till n
5:Exit            */
#include<stdio.h>
#include<conio.h>
void prime();
void palindrome(int);
int reverse();
int even(int);
int menu();
void main()
{
	int n,c;
	char yn;
	clrscr();
	do
	{
	c=menu();
	switch(c)
	{
	case 1:
		prime();
		break;
	case 2:
		printf("Enter value of n:");
		sacnf("%d",&n);
		palindrome(n);
		break;
	case 3:
	case 4:
	case 5:
		exit();
	default:
		printf("Invalid number");
	}
	printf("\n\n\t do you want to run again?(Yes=Y/y,No=N/n):");
	flushall();
	scanf("%c",&yn);
	}while(yn=='y'||yn=='y');
	getch();
}
int menu()
{
	int c;
	printf("\t\tMENU");
	printf("\n----------------------------------------------");
	printf("1:prime \n 2:palindrome \n 3:reverse number \n 4:Even number series \n 5:exit");
	printf("\n----------------------------------------------");
	printf("Enter your choice:");
	scanf("%d",&c);
	return c;
}
void prime()
{
	int n,i,count=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
		printf("Enter number is prime:");
	else
		printf("Enter number is not prime:");
}



