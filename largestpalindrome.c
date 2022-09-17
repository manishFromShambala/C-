//finding largest palindrome in string
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,b[10],c[10],k;
	printf("enter number of elements you want to print : ");
	scanf("%d",&n);
	printf("print elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=0;j<n;j++)
		{
			if(a[j]==b[k])
			c[i]++;
			k++;
			if(k==n)
			{
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			k=c[i];
			c[i]=c[i+1];
			c[i+1]=k;
		}
		
	}
	printf("%d",c[n-1]);
}
