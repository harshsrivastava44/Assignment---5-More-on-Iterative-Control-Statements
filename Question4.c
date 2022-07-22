//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of N  : \n");
    scanf("%d",&n);
   for(i=1;i<=n;i+=2)
    {
        printf("%d \n",i);

    }
    return 0;
}
