/*Given an array arr[], the goal is to count the number of inversions in all the sub-arrays. An inversion is a pair of indices i and j such that i > j and arr[i] < arr[j]. A sub-array from index x to y ( x<= y) consists of the element’s arr[x], arr[x+1], …, arr[y]. The array arr[] can also contain repeated elements.

Examples:

Input: arr[] = {3, 6, 1, 6, 5, 3, 9}
Output: 
0 0 2 2 4 7 7
0 0 1 1 3 6 6
0 0 0 0 1 3 3
0 0 0 0 1 3 3
0 0 0 0 0 1 1
0 0 0 0 0 0 0
0 0 0 0 0 0 0
Explanation: 
The element in the i’th row and j’th column of the output denotes the number of inversions from index i to j (inclusive). Consider i = 1 and j = 4 (assuming 0-based indexing), the number of inversions in the subarray {6, 1, 6, 5} is 3. The element pairs are (6, 1), (6, 5) and (6, 5) (from the second 6). 

Input: arr[] = {3, 2, 1}
Output:  
0 1 3
0 0 1
0 0 0
Explanation: 
From index 0 to 1 there is 1 inversion, from index 2 to 3 there is 1 inversion and from index 0 to 2 there are 3 inversions. The i’th row and j’th column of the output is 0 if i >= j.
*/

#include<iostream>
using namespace std;

int main(){
	int i,j,k,a[]={3, 2, 1},sum=0,p;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			sum=0;
			if(j<=i){
				cout<<sum;
			}
			else{
				for(k=j;k>=i+1;k--){
				     for(p=k-1;p>=i;p--){
				     	if(a[p]>a[k]){
				     		sum=sum+1;
					     }
				     }
			         }
			         cout<<sum;
			}
			
		}
		cout<<endl;
	}
	return 0;
}
