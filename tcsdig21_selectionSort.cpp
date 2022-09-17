#include<iostream>
using namespace std;

int selectionSort(int a[], int n){
	int min,k;
	for(int i=0;i<n-1;i++){
		min=a[i];
		k=i;
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];
				k=j;
			}
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}

int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	selectionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
