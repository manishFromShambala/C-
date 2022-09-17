//c++

#include<iostream>
using namespace std;

int ElementsAndIndices(int arr[],int n){
	int count =0;
	for(int i=0;i<n;i++){
		if(i == arr[i]){
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a=ElementsAndIndices(arr,n);
	cout<<a;
	return 0;
}
