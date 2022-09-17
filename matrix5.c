#include<stdio.h>
void main()
{
	int a[10][10],i,j,n;
	printf("enter vslue of n : ");
	scanf("%d",&n);
	printf("enter elements of a matrix : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			a[i][j]=a[i][j]+a[n-1-i][n-1-j];
			a[n-1-i][n-1-j]=a[i][j]-a[n-1-i][n-1-j];
			a[i][j]=a[i][j]-a[n-1-i][n-1-j];
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
