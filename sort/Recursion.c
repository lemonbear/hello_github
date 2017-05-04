/*µÝ¹é²éÕÒ*/
#include <stdio.h>
#include <stdlib.h>

long Factorial(int n);
long iterative_factorial(int n);

int main(void)
{
	int m;
	printf("please input the value of m:");
	scanf("%d",&m);
	long res = Factorial(m);
	long r = iterative_factorial(m); 
	printf("the factorial of %d is %d\n",m,res); 
	printf("the factorial of %d is %d",m,r);
	return 0;
} 


long Factorial(int n) //µÝ¹é 
{
	if(n==0)
		return 1;
	else
		return n * Factorial(n-1);
} 

long iterative_factorial(int n)//µü´ú 
{
	int i;
	long r=1;
	for(i=1;i<=n;i++)
	{
		r*=i;
	} 
	return r;
} 
