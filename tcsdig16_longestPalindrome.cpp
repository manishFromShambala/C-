//largest palindrome in the array

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int k=1;
	string str,str1,s,str2;
	cin>>str;
	s=str[0];
	for(int i=0;i<str.length();i++){
		for(int j=i;j<str.length();j++){
			str1=str.substr(i,j-i+1);
			str2=str1;
			reverse(str1.begin(),str1.end());
			if(str2==str1){
				if(str1.length()>k){
					k=str1.length();
					s=str1;
				}
			}
		}
	}
	cout<<endl<<s;
	return 0;
}

