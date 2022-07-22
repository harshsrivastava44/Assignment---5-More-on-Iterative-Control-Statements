//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of N\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        printf("%d x %d =%d \n",i,i,i*i);
    }
    return 0;
}