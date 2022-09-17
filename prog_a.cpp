#include<iostream>
using namespace std;

int main(){
	int a[50][250] = {0};
         //selecting random numbers without using libraries
	//consider two random number 30 and 49
	//square the numbers
	int c=29;
	int b=49;
	for (int i=0;i<250;i++){
		a[c][i]=1;
		a[b][i]=1;
		c=(c*(c+i))%50;
		b=(b*(b+i))%50;
		//c=(c+c)+b;
		//b=(b+b)+c;
	}
	for(int i=0;i<50;i++){
		for (int j=0;j<250;j++){
			printf("%d ",a[i][j]);
		}
		cout<<endl;
	}
}
