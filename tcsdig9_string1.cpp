#include<iostream>
#include<algorithm> //for sorting the string
#include<string>
using namespace std;

int main(){
	string str = "ApniKaksha", str2;
	string str1(5, 'n');
	cout<<str<<endl;
	cout<<str1;
	
	getline(cin, str2);
	string s1 = "fam";
	string s2 = "ily";
	//s1.append(s2);
	cout<<s1+s2<<endl;
	cout<<s1[1]<<endl; //a
	
	string a="siufnac sfnsiau siasnvjs";
	cout<<a;
	a.clear();
	cout<<a;
	if(a.empty()){
		cout<<"string is empty"<<endl;
	}
	cout<<s1.compare(s2)<<endl;
	
	string s3 = "nincompoop";
	s3.erase(3,3);
	cout<<s3<<endl;
	cout<<s3.find("com");
	s3.insert(2, "lol");
	cout<<s3<<endl;
	cout<<s3.size()<<endl;
	cout<<s3.length()<<endl;
	for(int i=0;i<=s1.length();i++){
		cout<<s1[i]<<endl;
	}
	string s4 = s1.substr(1,2);
	cout<<s4<<endl;
	
	
	sort(s1.begin(),s1.end());
	cout<<s1<<endl;
	
	
	return 0;
}
