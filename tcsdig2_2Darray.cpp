#include<iostream>
using namespace std;

int main(){
	//int a[][5];// It is compulsory to fix the size of the second block
	//first block can be neglected
	int a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j];
		}
	}
	
	return 0;
}
