//selection sort
//problem not done                                

#include<iostream>
using namespace std;

int main(){
	int n,a[10],k,j,ele;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		k=a[i];
		ele=i;
		for(j=1;j<n;j++){
			
			if(k>a[j]){
				k=a[j];
				ele=j;
				
			}
		}
		
	                  k=a[ele];
	                  a[ele]=a[i];
	                  a[i]=k;
		
	         
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
