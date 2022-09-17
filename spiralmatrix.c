#include<stdio.h>
void main()
{
	int a[10][10],imin=0,imax,jmin=0,jmax,i,j,m,n;
	printf("enter n value  : ");
	scanf("%d",&n);
	printf("enter m value  : ");
	scanf("%d",&m);
	imax=n-1;jmax=m-1;
	while(imin<=imax || jmin<=jmax)
	{
		if(imin<=imax)
	    {for(i=imin;i<=imax;i++)
	    {
		    a[i][jmin]=m*i+1+j;
	    }
		jmin++;}
		if(jmin<=jmax)
		{for(j=jmin;j<=jmax;j++)
		{
			a[imax][j]=m*i+1+j;
		}	
		imax--;}
		if(imin<=imax)
		{for(i=imax;i>=imax;i--)
		{
			a[i][jmax]=m*i+1+j;
		}
		jmax--;}
		if(jmin<=jmax)
		{for(j=jmax;j>=jmin;j--)
		{
			a[imin][j]=m*i+1+j;
		}
		imin++;}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
