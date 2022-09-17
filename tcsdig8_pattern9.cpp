/*
* * * * *
*     *
*   *
* *
*
*/


#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	for(int j=0;j<a;j++){
		cout<<"* ";
	}
	cout<<endl;
	for(int i=1;i<=a-1;i++){
		for(int j=0;j<=a;j++){
			if(j==0 || j==(a-i-1)){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
		
	}
}
