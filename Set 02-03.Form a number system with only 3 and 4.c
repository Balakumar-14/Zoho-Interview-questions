#include<stdio.h>
int main()
{
	int a[100]={3,4};
	int n,x=2,i;
	printf("Enter the n value:");
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		a[i+x]=(a[i]*10)+3;
		x++;
		a[i+x]=(a[i]*10)+4;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!= 0)
		{
			printf("\n%d",a[i]);
		}
	}
	return 0;
}
