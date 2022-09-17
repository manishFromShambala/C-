#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	int len = s.size();
	int i,j, count=0;
	for(i=0,j=len-1;i<len;j--,i++)
	if(s[i]==s[j])
	count++;
	cout<<count;
	return 0;
}
