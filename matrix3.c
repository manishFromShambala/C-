#include<stdio.h>
void main()
{
	int i,j,b[10][10],a[10][10],k=0,n;
	printf("print number of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    b[j][i]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
