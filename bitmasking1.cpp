#include<iostream>
using namespace std;
int main(){
	int n,m,x=0;
	cin>>n>>m;
	x=2^m;
	if((n & x)!=0) {
		x=1 ;
	} 
	else
	x=0;
	cout<<x;
}
