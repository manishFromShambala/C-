#include<iostream>
using namespace std;

int insertionSort(int a[], int n){
	int min,k;
	for(int i=1;i<n;i++){
		
		for(int j=i;j>0;j--){
			if(a[j]<a[j-1]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		
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
	
	insertionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
