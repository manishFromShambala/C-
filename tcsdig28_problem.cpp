#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=3,b=2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%.5d ",a*b);
			a=a+4;
			b=b+2;
		}
		cout<<endl;
	}
	return 0;
}
