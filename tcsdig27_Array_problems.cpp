#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	int idx[n+1];
	for(int i=0;i<=n;i++){
		idx[i] = -1;
	}
	
	int minidx = INT_MAX;
	
	for(int i=0;i<n;i++){
		if(idx[a[i]] != -1)  {
			idx[a[i]]++;
			
		}
		if(idx[a[i]] == -1){
			idx[a[i]] = i;
		}
	}
	for(int i=0;i<n;i++){
		if(idx[a[i]] != i){
			cout<<i;
			break;
		}
	}
	
	return 0;
}
