#include<iostream>
#include<cmath>
using namespace std;

int bs(int a[],int l,int r, int key){
	int mid,left=l,right=r;
	while(left<=right){
		
	mid=floor((left+right)/2);
	if(key==a[mid]){
		return mid;
	}
	else if(key<a[mid]){
		right=mid-1;
	}
	else{
		left=mid+1;
	}
	
         }
	return -1;
}

int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int key;
	cin>>key;
	
	cout<<bs(a,0,n-1,key);

	return 0;
}
