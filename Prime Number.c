// Write a program in C to check whether a number is a prime number or not using the function.

#include <stdio.h>
#include <conio.h>
int prime(int n);
void main()
{
	int num,f;
	printf("Input a positive number : ");
	scanf("%d",&num);
	f=prime(num);
	if(f==0)
		printf("The number %d is a prime number.\n",num);
	else
		printf("The number %d is not a prime number.\n",num);
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
