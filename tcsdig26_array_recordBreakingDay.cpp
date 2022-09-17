#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	if(a[0]>a[1]){
		cout<<a[0]<<endl;
	}
	for(int i=1;i<n-1;i++){
		int k=0;
		if(a[i]>a[i+1]){
			for(int j=0;j<i;j++){
			         if(a[i]>a[j]){
			        	         k++;
			         }
		         }
		         if(k==i){
		         	cout<<a[i]<<endl;
			}
			
		}
		
	}
	if(a[n-1]>a[n-2]){
		cout<<a[n-1];
	}
	
	
	return 0;
}
