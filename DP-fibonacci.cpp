#include<iostream>
using namespace std;
int qb[n];
int fib(int n){
	if(n==1) return 0;
	else if(n==2) return 1;
	
	else {qb[n]=fib(n-1)+fib(n-2);  cout<<qb[n];}
}

int fibn(int n, int qb){
	if(qb[n] != 0) return qb[n];
	else fib(n);
}

int main(){
	int n;
	cin>>n;
	cout<<fibn(n,qb);
}
