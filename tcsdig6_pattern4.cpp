#include<iostream>
using namespace std;

int main(){
	
	for(int i=0;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(j>9-i){
				cout<<j;
			}
			else{
				cout<<" ";
			}
		}
		cout<<"0";
		for(int j=9;j>=1;j--){
			if(j>9-i){
				cout<<j;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
