// a= 10110
// b= 11011
// find how many bits are different
//can solve using xor
//a^b = 01101
//right shift every time and check whether it is even or not

#include<iostream>
using namespace std;

int main(){
	int a,b,c,sum=0;
	cin>>a>>b;
	c=a^b;
	while(c!=0){
		
		if(c%2!=0){
			sum=sum+1;
		}
		c=c>>1;
	}
	cout<<sum;
}

//time complexity:
// suppose there are 4 bits [ 1101 ] = 13, then
// log2(n)+1
// log2(13) + 1
//3.(something) + 1
//  approx 4
//this 4 is equal to the number of bits in the binary code of the number

// to find out how many digits in decimal representation
//log10(n) + 1

