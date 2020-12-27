// Write a program in C to swap two numbers using function using third variable.

#include <stdio.h>
void swap(int*, int*);

int main()
{
   int x, y;

   printf("Input 1st number : ");
   scanf("%d",&x);
   printf("Input 2nd number : ");
   scanf("%d",&y);

   printf("Before Swapping : n1 = %d, n2 = %d\n", x, y);

   swap(&x, &y);

   printf("After Swapping : n1 = %d, n2 = %d\n", x, y);

   return 0;
}

void swap(int *a, int *b)
{
   int t;

   t  = *b;
   *b = *a;
   *a = t;
}
