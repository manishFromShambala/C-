//find the only non-repeating element in an array where every element repeats twice
//a=[5,4,1,4,3,5,1]
// res=3
// how to do
// 5^4^1^4^3^5^1 = 3

#include<iostream>
using namespace std;

int main(){
	int a[10],res=0,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		res=res^a[i];
	}
	cout<<res;
}

//time complecity = O(n)
//space complexty = O(1)
