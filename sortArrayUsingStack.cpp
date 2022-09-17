#include<stdio.h>
#include<conio.h>
int arr[10],top=-1,temp;
int pop(){
	return arr[top--];
}
void push(int temp){
	arr[++top]=temp;
}
int main(){
	int a[10],i;
	printf("enter elements : \n");
	for(i=0;i<7;i++)
	    scanf("%d",&a[i]);
	
		for(i=6;i>=0;i--){
			temp=a[i];
			if(top==-1)
			    push(temp);
			else if(arr[top]>temp){
				a[i]=pop();
				push(temp);
			}    
			else
			    push(temp);
		}
	
	for(i=0;i<=top;i++){
		printf("%d ",arr[i]);
	}
}
