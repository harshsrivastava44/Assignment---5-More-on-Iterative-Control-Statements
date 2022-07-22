//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N  : \n");
    scanf("%d",&n);
    for ( i = n; i >=0; i--)
    {
        printf("%d\n",2*i);
    }
    return 0;
    }
