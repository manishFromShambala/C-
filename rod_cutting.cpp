
#incluce<iostream>
using namespace std;

int main(){
	int l;
	cin>>l;
	int int a[l];
	
	
	for(int i=0;i<l;i++){
		cout<<"prize of rod of length "+i+" = ";
		cin>>a[i];  //considering indexes as lengths of rods
	}
	int arr[l+1][l+1];
	for(int i=0;i<=l;i++){
		arr[0][i]=0;
		arr[i][0]=0;
	}
	
	for(int i=0;i<n+1;i++)  arr[i][0]=k++;
	k=1;
	for(int i=0;i<m+1;i++)  arr[0][i]=k++;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(a[i]==b[j]){
				arr[i][j]=arr[i-1][j-1];
			}
			else{
				arr[i][j]=min(arr[i-1][j],arr[i-1][j-1],arr[i][j-1])+1;
			}
		}
	}
}
