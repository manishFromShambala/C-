#include<iostream>
using namespace std;

int main(){
	int i,k;
	k=127;
	
	for(i=0;i<5;i++){
		
		k=k>>1;
		cout<<k<<endl;
	}
}
