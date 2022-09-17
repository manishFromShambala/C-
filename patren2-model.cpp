#include<iostream>
using namespace std;
int i,j,n,m,b;
cin>>n>>m;
b=n;
int case1(int m, int n){
	if(m>0,n>0){
		cout<<m;
		n--;
	}
	else if(n==0){
		m--;
		n=b;
	}
	else if(m==0){
		return 0;
	}
	case1(m,n);
}
int main(){

	
	case1(m,n);	
	return 0;
}



