//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter How many N odd natural number you want to print   : \n");
    scanf("%d",&n);
  for ( i = n; i>=1; i=i-1)
  {
    
        printf("%d \n",2*i-1);
  }
    return 0;
}
