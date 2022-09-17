#include<iostream>
using namespace std;

template<class T>
void bubblesort(T a[], int n){
	for(int i=0 ; i<n-1 ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(a[i]>a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}

main(){
	int a[10],n;
	char b[6]={"a", "s", "f", "d", "g"};
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	bubblesort<int>(a,n);
	bubblesort<char>(b,6);
	
	for(int i=0 ; i<n ; i++){
		cout<<a[i]<<"\t";
	}
	
}
