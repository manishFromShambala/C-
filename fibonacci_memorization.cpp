//memorization method

#include<bits/stdc++.h>
#define setBits(x) builtin_popcount(x)

using namespace std;

const int N =1e3+2, MOD = 1e9+7;

int dp[N];

int fib(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else if(dp[n] != -1 ){
		return dp[n];
	}
	else{
		dp[n] = fib(n-1)+fib(n-2);
		return dp[n];
	}
}

signed main(){
	int n;
	cin>>n;
//	rep(i,0,N){
         for(int i=0;i<N;i++){
		dp[i] = -1;
	}
	cout<<fib(n)<<endl;
	return 0;
}
