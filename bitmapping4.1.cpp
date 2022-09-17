//n and n-1 method
// eg 1101
//    1100
//    1000
//    0000
// 2^50 = 100000000.........0
// it can be done in one operattion

//  1101  sum=0
// &1100  
//  1100 sum=1
// &1011
//  1000 sum=2
// &0111
//  0000 sum=3


//counting number of 1's
#include<iostream>
using namespace std;

int main(){
	int i,j,sum=0;
	cin>>i;
	while(i>0){
		sum=sum+1;
		i=i & (i-1);
	}
	cout<<sum;
}

