#include<iostream>
using namespace std;

int main(){
	int i,j,n,m;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=m;j>i;j--){
			cout<<i;
			
		}
		cout<<endl;
	}
	
}
