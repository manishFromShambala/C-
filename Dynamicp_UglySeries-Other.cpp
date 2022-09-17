//Dynamic programming
//ugly number --- other method
//series - 1 2 3 4 5 6 8 9 10 12 15 ....

#include<iostream>
using namespace std;

int getNthUglyNumber(int n){
	unsigned ugly[n];
	
	unsigned i2=0,i3=0,i5=0;
	unsigned next_multiple_of_2=2;
	unsigned next_multiple_of_3=3;
	unsigned next_multiple_of_5=5;
	unsigned next_ugly_number=1;
	ugly[0]=1;
	for(int i=1;i<n;i++){
		next_ugly_number=min(next_multiple_of_2, min(next_multiple_of_3, next_multiple_of_5));
		ugly[i]=next_ugly_number;
		if(next_ugly_number == next_multiple_of_2){
			i2++;
			next_multiple_of_2 = ugly[i2] * 2;
		}
		if(next_ugly_number == next_multiple_of_3){
			i3++;
			next_multiple_of_3 = ugly[i3] * 3;
		}
		if(next_ugly_number == next_multiple_of_5){
			i5++;
			next_multiple_of_5 = ugly[i5] * 5;
		}
		//cout<<ugly[i]<<" ";
	}
	return ugly[n-1];
}

int main(){
	int n;
	cin>>n;
	cout<<getNthUglyNumber(n);
	return 0;
}

//Time Complexity: O(n) 
//Auxiliary Space: O(n)
