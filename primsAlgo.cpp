#include<bits/stdc++.h>
using namespace std;
#define N 5

int main(){
	int g[N][N]={{0,0,8,0,5},{3,0,1,0,0},{0,0,0,3,0},{1,4,5,0,0},{4,5,0,0,0}};
	int a=0,arr[N],p,b,w=0;;
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N;j++){
			g[j][a]=100;
		}
		arr[i]=a;
		cout<<a<<"-";
		p=g[0][0];
		for(int j=0;j<=i;j++){
			for(int k=0;k<N;k++){
				if(p>g[arr[j]][k] && g[arr[j]][k]!=0 && g[arr[j]][k] != 100){
					p=g[j][k];
					a=k;
					b=j;
					
				}
			}
		}
		w=w+p;
		cout<<b<<"  "<<p<<endl;
		
	 	
	}
	cout<<"total weight: "<<w<<endl;
}
