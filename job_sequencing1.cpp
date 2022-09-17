#include<iostream>
using namespace std;

int main(){
	int job[10],prt[10],dl[10],arr[10],i,j,n,m,k,l;
	cout<<"enter number of jobs to be done: ";
	cin>>n;
	cout<<"enter the job's profit and deadline respectively"<<endl;
	m=dl[0];
	for(i=0;i<n;i++){
		cout<<"for "<<i<<"th job: ";
		cin>>prt[i]>>dl[i];
		job[i]=dl[i];
		if(dl[i]>m){
			m=dl[i];
		}
	}
	for(i=0;i<m;i++){
		k=-1;
		for(j=0;j<n;j++){
			if(job[j]>=m){
			        if(k<prt[j]){
			        	k=prt[j];
			        	l=j;
			        }	
			}
		}
		job[l]=-1;
		arr[i]=l;
	}
	for(i=0;i<m;i++){
		if(arr[i]!=-1){
			cout<<"J"<<arr[i]<<endl;
		}
	}
	return 0;
}
