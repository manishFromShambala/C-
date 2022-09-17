//Dynamic programming
//ugly number --- simple method
//series - 1 2 3 4 5 6 8 9 10 12 15 ....


#include<iostream>
using namespace std;

int ndivide(int i, int k){
	while(i%k==0){
		i=i/k;
	}
	return i;
}

bool isUgly(int i){
	i=ndivide(i,2);
	i=ndivide(i,3);
	i=ndivide(i,5);
	return (i==1)?1:0;
}

int ugly(int n){
	int i;
	int count = 0;
	while(n>count){
		i++;
		if(isUgly(i)==1) count++;
	}
	return i;
}

int main(){
	int n;
	cin>>n;
	cout<<ugly(n);
	return 0;
}


//Space complexity is O(1), but it is not time efficient as it checks for all the numbers
