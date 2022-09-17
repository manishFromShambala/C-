
#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	int isequ=0;
	int isplus=0;
	for(int i=0;i<n;i++){
		if(s[i] == "="){
			isequ=i;
		}
		if(s[i] == "+"){
			isplus=i;
		}
	}
	string s1="",s2="",s3="";
	for(int i=0;i<isplus-1;i++){
		s1=s1+s[i];
	}
	for(int i=isplus+2;i<isequ-1;i++){
		s2=s2+s[i];
	}
	for(int i=isequ+2;i<n;i++){
		s3=s3+s[i];
	}
	
	if(s1=="x"){
		cout<<(stoi(s3) -stoi(s2));
		
	}
	else if(s2=="x"){
		cout<<(stoi(s3) -stoi(s1));
	}
	else if(s3=="x"){
		cout<<(stoi(s2) +stoi(s1));
	}
	else{
	}
	
	
	return 0;
}
