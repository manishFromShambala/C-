#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int max;
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if((a[j]+a[k])%2==0){
					max=a[j]+a[k];
					int t=0;
					while(max!=0){
					max/=10;t++;	
					}
					cout<<"2"<<t<<endl;
					
				}
			}
		}
		
	}
	
	return 0;
}
