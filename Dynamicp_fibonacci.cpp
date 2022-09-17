//Dynamic programming  ---   Memorization Technique
//fibonacci series
#include<iostream>
#define nil -1
#define max 100
using namespace std;

int a[100];


int fib(int n){
	
	
	if(a[n]==nil){
	         if(n<=1){
	         	a[n]=n;
		}
		else{
		         a[n]=fib(n-1)+fib(n-2);
		}	
		
	}
	return a[n];
}

int main(){
	
	int n;
	cin>>n;
	
	for(int i=0;i<max;i++){
		a[i]=nil;
	}
	cout<<fib(n)<<" ";
         
	return 0;
}
