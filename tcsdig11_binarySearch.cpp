#include<iostream>
using namespace std;

int binary_search(int a[],int n,int key){
	int high=n-1, low=0,k;
	while(high!=low){
		k=(high + low)/2;
		if(key<a[k]){
			high=k-1;
		}
		else if(key>a[k]){
			low=k+1;
		}
		else if(key == a[k]){
			return k;
		}
		
	}
	
	return -1;
}

int main(){
	int n,a[10],key;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>key;
	if(binary_search(a,n,key) == -1){
		cout<<"Element not found.";
	}
	else{
		int i = binary_search(a,n,key) + 1;
		
		cout<<"element found at "<<i<<"st position.";
	}
	
	return 0;
}
