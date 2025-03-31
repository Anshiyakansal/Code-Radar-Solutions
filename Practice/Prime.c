#include<stdio.h>
int isPrime(int a);
int main()
{
    int n,fact_count;
	printf(" Input a positive number : ");
    scanf("%d",&n);
       fact_count = isPrime (n);
    if(fact_count ==2)
        printf(" %d is a prime number \n", n);
      else
      printf(" %d is not a prime number\n", n);
   return 0;
}
int isPrime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
           if(n%i==0)
           count++;
    }
return count;
}
