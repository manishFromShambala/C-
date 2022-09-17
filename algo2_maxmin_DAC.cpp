#include<iostream>
#include<cmath>
using namespace std;


int maxmin(int* a[],int i,int j){
	int max,min;
	int max1,max2,min1,min2,mid;
	if(i==j){
		max=*a[i];
		min=*a[i];
	}
	else if(i==j-1){
		if(*a[i]>*a[j]){
			max=*a[i];
			min=*a[j];
		}
		else{
			max=*a[j];
			min=*a[i];
		}
	}
	else{
		mid=floor((i+j)/2);
		(max1,min1) = maxmin(a,i,mid);
		(max2,min2) = maxmin(a,mid+1,j);
		if(max1<max2){
			max=max2;
		}
		else{
			max=max1;
		}
		if(min1<min2){
			min=min1;
		}
		else{
			min=min2;
		}
	}
	
	return (min,max);
}

int main(){
	
	int n,a[10],p,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	(p,q) = maxmin(a,0,n-1);
	cout<<p<<" "<<q;
	
	return 0;
}
