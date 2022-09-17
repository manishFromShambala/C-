//search element given before array
#include<iostream>
using namespace std;

int main(){
	int test, size, a[10], element, i,j,result[10];
	cout<<"enter no. of test cases: ";
	cin>>test;
	for(i=0;i<test;i++){
		cout<<"enter no. of elements: ";
		cin>>size;
		cin>>element;
		result[i]==-1;
		for(j=0;j<size;j++){
			
			cin>>a[j];
			if(a[j]==element && result[i]==-1){
				result[i]=j;
			}
		}
	}
	for(i=0;i<test;i++){
		cout<<result[i]<<endl;
	}
}
