//sort elements according to their frequrency

#include<iostream>
using namespace std;

int main(){
	int n,a[10],b[10],k=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		k=1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				k++;
				a[j]=-1;
				b[j]=-1;
			}
		}
		b[i]=k;
	}
	
	for(int i=0;i<n;i++){
		k=0;
		for(int j=0;j<n-1;j++){
			if(b[k]<b[j+1]){
				k=j+1;
				
			}
		}
		if(a[k]!=-1)
		cout<<a[k]<<" ";
		a[k]=-1;
		b[k]=-1;
	}
	
	
	return 0;
}
