//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N  : \n");
    scanf("%d",&n);
   for ( i = 0; i <=n; i+=2)
   {
    printf("%d \n",i);
   }
   
    return 0;
}