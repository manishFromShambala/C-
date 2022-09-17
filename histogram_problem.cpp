//Finding maximum area rectangle in histogram

#include<iostream>
using namespace std;

int main(){
	int p=1;
	while(p){
	
	int n,i,j;
	cin>>n;
	int a[n],k=0;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>k) k=a[i];
	}
	
	int a1[k][n];
	
	
	for(j=0;j<k;j++){
		for( i=0;i<n;i++){
			if(j<a[i]) a1[j][i]=1;
			else a1[j][i]=0;
		}
	}
	
	for( j=0;j<k;j++){
		for( i=0;i<n;i++){
			if(i==0 && a1[j][i]==1) a1[j][i]=j+1;
			else if(a1[j][i]==1) a1[j][i]=j+1 + a1[j][i-1];
			else a1[j][i]=0;
		}
	}
	
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cin>>p;
         }
	
}

/*
6
2
1
5
6
2
3
1 2 3 4 5 6
2 0 2 4 6 8
0 0 3 6 0 3
0 0 4 8 0 0
0 0 5 10 0 0
0 0 0 6 0 0


1
6
4
3
1
5
0
5
1 2 3 4 0 1
2 4 0 2 0 2
3 6 0 3 0 3
4 0 0 4 0 4
0 0 0 5 0 5


1
5
1
5
3
5
6
1 2 3 4 5
0 2 4 6 8
0 3 6 9 12
0 4 0 4 8
0 5 0 5 10
0 0 0 0 6


1
5
1
4
4
5
3
1 2 3 4 5
0 2 4 6 8
0 3 6 9 12
0 4 8 12 0
0 0 0 5 0


1
5
5
1
4
4
5
1 2 3 4 5
2 0 2 4 6
3 0 3 6 9
4 0 4 8 12
5 0 0 0 5


1
4
4
4
4
4
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16


*/
