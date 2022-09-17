//find the only non-repeating element in an array where every other element repeats thrice
//a = [2,2,1,5,2,1,1]
// ans = 5
// 2 = 10
// 2 = 10
// 1 = 01
// 5 = 101
// 2 = 10
// 1 = 01
// 1 = 01
//sum  134
// check mod 3 of each and every digit


#include<iostream>
using namespace std;

int main(){
	int a[10],b[10],i,n,k,j=0,p=0;
	cin>>n;
	for(i=0;i<10;i++){
		b[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>a[i];
		k=a[i];  
		j=0;
		
		while(k!=0){
			if(k&1 == 1){
				b[j]=b[j]+1;
			}
			j=j+1;
			
			k=k>>1;
		
			if(j>p){
				p=j;
		         }
			
		}
		
	}
	j=0;
	for(i=p-1;i>=0;i++){
		j=j+((b[i]%3) * (2^(p-i+1)));
	}
	cout<<j;
}
