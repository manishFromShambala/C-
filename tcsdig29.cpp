#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int exp;
	cin>>exp;
	
	int monster[n];
	for(int i=0;i<n;i++){
		cin>>monster[i];
	}
	 
	int bonus[n];
	for(int j=0;j<n;j++){
		cin>>bonus[j];
	}
	
	sort(monster, monster+n);
	sort(bonus,bonus+n);
	
/*	for(int i=0;i<n;i++){
		cout<<monster[i];
	}
	for(int i=0;i<n;i++){
		cout<<bonus[i];
	}
*/
         int k=0,j;
         for(int i=0;i<n;i++){
         	if(exp>=monster[i]){
         		k=k+1;
                           for(j=0;j<n;j++){
                           	if(i<n){
                           		if(bonus[j]>=(monster[i+1] - exp) && bonus[j] != -1){
                           			exp=exp+bonus[j];
                           			bonus[j]=-1;
                           			break;
					}
				}
				/*if(i=n-1){
					if(bonus[j]!=-1){
						exp=exp+bonus[j];
						cout<<"bonus"<<j<<" "<<bonus[j]<<endl;
						bonus[j] = -1;
						
						break;
					}
				}*/
                           	
			}
			if(j==n){
				cout<<"1";
				break;
			}		
		}
		else{
			cout<<"2";
			break;
		}
	}
	cout<<k;
         	
		
	
	return 0;
}
