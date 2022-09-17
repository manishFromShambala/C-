#include<iostream>
using namespace std;

int main(){
	
	int a,b,sum=0,l=1;
	
	while(l==1){
		sum=0;
	cin>>a>>b;
	while(a!=0){
		l=a%10;
	         sum=sum+l;
	         a=(a-l)/10;
	     	
	}
	while(b!=0){
		l=b%10;
	         sum=sum+l;
	         b=(b-l)/10;
	     	
	}
	cout<<sum;
	cin>>l;
         }
	
	return 0;
}
