//minimum edit distance problem
//s1=sunday s2=saturday
//time complexity = O(m*n)
//m - length of string s1;
//n - length of string s2;
#include<iostream>
using namespace std;

int minimum(int a,int b, int c){
    if(a<b){
        if(a<=c) return a;
        else return c;
    }
    else{
        if(b<=c) return b;
        else return c;
    }
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int arr[n+1][m+1],k=1;
	arr[0][0]=0;
	for(int i=0;i<n+1;i++)  arr[i][0]=i;
	k=1;
	for(int i=0;i<m+1;i++)  arr[0][i]=i;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(a[i]==b[j]){
				arr[i][j]=arr[i-1][j-1];
			}
			else{
				arr[i][j]=minimum(arr[i-1][j],arr[i-1][j-1],arr[i][j-1])+1;
			}
		}
	}
	
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
//The code will work for arr[n][m]-1 as answer

/*
8
6
1
2
3
4
5
6
7
8
1
4
9
6
7
8

input -2
6
7
1
2
3
4
5
6
7
2
3
4
2
8
9

input -3
8
7
1
2
3
4
5
6
7
8
9
10
11
5
6
7
8
output-
0 1 2 3 4 5 6 7
1 1 2 3 4 5 6 7
2 2 2 3 4 5 6 7
3 3 3 3 4 5 6 7
4 4 4 3 4 5 6 7
5 5 5 4 3 4 5 6
6 6 6 5 4 3 4 5
7 7 7 6 5 4 3 4
8 8 8 7 6 5 4 4

*/
