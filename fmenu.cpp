#include<stdio.h>
#include<conio.h>
int menu();
void sum();
void palindrom(int);
int armstrong();
int squre(int);
void main()
{
	int a,b,c;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				sum();
				break;
			case 2:
				printf("ENTER VALUE FOR CHEKING PALINDROM OR NOT:");
				scanf("%d",&c);
				palindrom(c);
				break;
			case 3:
				c=armstrong();
				if(c==1)
					printf("ARMSTRONG NUMBER.");
				else
					printf("NOT ARMSTRONG.");
				break;
			case 4:
				printf("Enter any number to print squre serise:");
				scanf("%d",&a);
				c=squre(a);
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choise");
		}
		printf("\nyou want to continue?if yes(y/Y) else no(N/n):");
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}
int menu()
{
	int choise;
	printf("\n\n\t\tmenu\n____________________________________________");
	printf("\n\t1\tsum of each degit\n");
	printf("\n\t2\tsum of palindrom\n");
	printf("\n\t3\tsum of armstrong\n");
	printf("\n\t4\tsum of squre serise\n");
	printf("\n\t5\tsum of exit\n____________________________________________\n");
	printf("enter your choise:");
	scanf("%d",&choise);
	return choise;
}
void sum()
{
	int n,i,s=0;
	printf("enter number to calculate sum:");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		s=s+i;
		n=n/10;
	}
	printf("sum of each degit is:%d",s);
}
void palindrom(int n)
{
	int i,s=0,t=n;
	while(n>0)
	{
		i=n%10;
		s=(s*10)+i;
		n=n/10;
	}
	if(t==s)
		printf("number is palindrom.");
	else
		printf("number is not palindrom");
}
int armstrong()
{
	int n,i,s=0,t;
	printf("enter number to find number is armstrong or not.:");
	scanf("%d",&n);
	n=t;
	while(n>0)
	{
		i=n%10;
		s=s+(i*i*i);
		n=n/10;
	}
	if(t==s)
		return 1;
	else
		return 0;
}
int squre(int a)
{
	int i;
	printf("\n\n");
	for(i=1;i<=a;i++)
		printf("%d ",i*i);
	return 0;
}
