//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number : \n");
    scanf("%d",&n);
  while (n>=1)
  {
    printf("%d ",n);
    n-=1;
  }
    return 0;
}
