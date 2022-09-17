//find the tonon repeting elements in an array
//a  = [5,4,1,4,3,5,1,2]
//res = 3, 2
//how to do?
// xor all the elements we get 01
// select the left most 1
//divide the elements based on that bit
// then repeat the process

#include<iostream>
using namespace std;

int main(){
	int a[10],l=0,res=0,n,p[10],q[10],x=0,y=0,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		res=res^a[i];
	}
	while(1){
		if(res & 1 == 1){
			l=l+1;
			break;
		}
	}
	for(i=0;i<n;i++){
		if((a[i]>>(l-1)) & 1 == 1){
			p[x]=a[i];
			x++;
		}
		else{
			q[y]=a[i];
			y++;
		}
	}
	res=0;
	for(i=0;i<x;i++){
		res=res^p[i];
	}
	cout<<res<<endl;
	res=0;
	for(i=0;i<y;i++){
		res=res^q[i];
	}
	cout<<res;
}

//time ccinomplecity = O(n)
//space complexty = O(1)

