// Write a program in C to check Armstrong and perfect numbers using the function.

#include <stdio.h>

int Armstrong(int n);
int Perfect(int n);

int main()
{
    int n;
	printf("Input any number: ");
    scanf("%d", &n);

    if(Armstrong(n))
    {
        printf("The %d is an Armstrong number.\n", n);
    }
    else
    {
        printf("The %d is not an Armstrong number.\n", n);
    }

    if(Perfect(n))
    {
        printf("The %d is a Perfect number.\n", n);
    }
    else
    {
        printf("The %d is not a Perfect number.\n", n);
    }
    return 0;
}

int Armstrong(int n)
{
    int c, sum, num;
    sum = 0;
    num = n;
    while(num!=0)
    {
        c = num % 10;
        sum += c * c * c;
        num = num/10;
    }
    return (n == sum);
}

int Perfect(int n)
{
    int i, sum, num;
    sum = 0;
    num = n;
    for(i=1; i<num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    return (n == sum);
}
