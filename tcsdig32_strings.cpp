#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string str="nivsnvbsrgbx";
	
	transform(str.begin(),str.end(),str.begin(), ::toupper);
	cout<<str<<endl;
	
	
	//find greatest number
	string s="5412654865552";
	sort(s.begin(),s.end(),greater<int>());
	cout<<s<<endl;
	
	//output the highest frequency in an array
	string s1="nvsijmvdjbnosmcnbnsmvksnv";
	int freq[26];
	for(int i=0;i<26;i++){
		freq[i]=0;
	}
	for(int i=0;i<s1.size();i++){
		freq[s1[i]-'a']++;
	}
	
	char ans = 'a';
	int maxf=0;
	
	for(int i=0;i<26;i++){
		if(freq[i]>maxf){
			maxf=freq[i];
			ans=i+'a';
		}
	}
	
	cout<<maxf<<" "<<ans<<endl;
	
	return 0;
}
