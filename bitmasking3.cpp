//removing 1's from the bit combination [ 10111010] remove 5th 1
// output: [10101010]

#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	cin>>n>>i;
	j=~(1<<(i-1));
	cout<<(n & j);
	
}
