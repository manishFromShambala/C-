
#include<iostream>
using namespace std;

int fact(int n){
	int factorial=1;
	for(int i=2;i<=n;i++)
	factorial=factorial*i;
	return factorial;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
		         int ans = fact(i)/(fact(j)*fact(i-j));
	                  cout<<ans;	
		}
		cout<<endl;
	}
	
}
