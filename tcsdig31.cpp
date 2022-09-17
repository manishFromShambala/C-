#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	
	int p[2],pp[2];
	for(int i=0;i<2;i++){
		p[i]=a[0][i];
		pp[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			if(i>0){
				if(a[i][j]>a[i-1][j]){
					if(pp[j] == 0)
					p[j]=p[j]+a[i][j];
				}
				else{
					pp[j]=-1;
				}
			}
			
		}
	}
	int k=p[0];
	for(int i=1;i<2;i++){
		
		if(k<p[i]){
			k=p[i];
		}
	}
	cout<<k;
	return 0;
}
