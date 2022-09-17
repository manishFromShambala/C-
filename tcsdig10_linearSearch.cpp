#include<iostream>
using namespace std;

int linearsearch(int a[],int n,int key){
	for(int i=0;i<n;i++){
		if(key == a[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	int n,a[10],key;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>key;
	if(linearsearch(a,n,key) == -1){
		cout<<"Element not found.";
	}
	else{
		int i = linearsearch(a,n,key) + 1;
		
		cout<<"element found at "<<i<<"st position.";
	}
	
	return 0;
}
