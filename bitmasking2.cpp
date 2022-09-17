#include<iostream>
using namespace std;
int main(){
	int n,m,mask;
	cin>>n>>m;
	mask=1<<(m-1);
	cout<<mask;
	n=n|mask;
	cout<<n;
}
