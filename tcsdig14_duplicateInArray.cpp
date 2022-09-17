//program to remove all duplicates in an array

#include<iostream>
using namespace std;

int main(){
	
	int n,a[10],b[10],k=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			b[i]=a[i];
		}
		else if(a[i]!=a[i-1]){
			b[k++]=a[i];
		}
	}
	for(int i=0;i<k;i++){
		cout<<b[i]<<endl;
	}
	
	return 0;
}
