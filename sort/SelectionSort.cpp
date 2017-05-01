/*
—°‘Ò≈≈–Ú 
*/
#include <stdio.h>

void SelectSort(int *a,int n);

int main(void)
{
	int nu;
	int x[10]={2,4,6,5,2,9,10,56,5,4}; 
	for(nu=0;nu<10;nu++)
	{
		if(nu==9)
			printf("%d\n",x[nu]);
		else
			printf("%d ",x[nu]); 
	} 
	SelectSort(x,10);
	for(nu=0;nu<10;nu++)
	{
		if(nu==9)
			printf("%d\n",x[nu]);
		else
			printf("%d ",x[nu]); 
	}  
	
	return 0;
} 

void SelectSort(int *a,int n)
{
	int i,j,k,t;
	int min;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min = j; 
		} 
		t=a[i];
		a[i]=a[min];
		a[min]=t; 
	}
} 
