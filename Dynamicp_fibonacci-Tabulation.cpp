// Dynamic programming ---  Tabulation Technique[Bottom-up]
// Fibonacci series

#include<iostream>
using namespace std;

int fib(int n){
	int a[n];
	a[0]=0;a[1]=1;
	for(int i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[n-1];
}


int main(){
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
