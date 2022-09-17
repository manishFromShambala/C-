#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k[10],n,p=0,d=0;
	char c[10];
	printf("enter length of string : ");
	scanf("%d",&n);
	printf("enter the string : ");
	for(i=0;i<n;i++)
	{
		scanf("%s",&c[i]);
		if(c[i]=="d")
		{
			d=d+1;
		}
	}
	n++;
	k[0]=d+1;
	p=d+2;
	for(i=0;i<n;i++)
    {
        if(i>0)
		{
		    if(c[i]=="d")	
		    {
		    	k[i]=p++;
			}
			else
			{
				k[i]=d--;
			}
		}	
	}
	for(i=0;i<n;i++)
	{
		printf("%d",k[i]);
	}
}
