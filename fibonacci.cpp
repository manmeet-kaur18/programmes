#include<stdio.h>
using namespace std;

long fib(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	long x;
	printf("enter x: ");
	scanf("%ld",&x);
	printf("%d",fib(x));
}
