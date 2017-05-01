/*
ц╟ещеепР 
*/
#include <stdio.h>

void BubbleSort(int *a,int n);

int main(void)
{	
	int nu;
	int a[10] = {2,4,6,5,2,9,10,56,5,4};
	for(nu=0;nu<10;nu++)
	{
		if(nu==9)
			printf("%d\n",a[nu]);
		else
			printf("%d ",a[nu]); 
	}  
	BubbleSort(a,10);
	for(nu=0;nu<10;nu++)
	{
		if(nu==9)
			printf("%d\n",a[nu]);
		else
			printf("%d ",a[nu]); 
	} 
	return 0;
} 


void BubbleSort(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]) 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t; 
			} 
		} 
} 
