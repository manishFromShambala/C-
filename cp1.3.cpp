/*
Given a number N, and an array A[] of size 2N, the task is to make N pairs of these array elements and place them on an X-Y coordinate plane, such that they are enclosed inside a minimum area rectangle( with sides parallel to the X-axis and Y-axis) and print the area of the rectangle.

Examples:

Input: N = 4, A = {1, 4, 2, 5, 3, 6, 7, 8}
Output: 9
Explanation: One possible way of making N pairs to get minimum rectangle area is {(1, 5), (2, 7), (3, 6), (4, 8)}
The minimum area rectangle has been shown in the following diagram:



Note: There maybe other ways to make N pairs such that the area remains minimum, but the minimum area remains 9.




Input: N = 3, A = {1, 3, 1, 1, 2, 1}
OutputGiven a number N, and an array A[] of size 2N, the task is to make N pairs of these array elements and place them on an X-Y coordinate plane, such that they are enclosed inside a minimum area rectangle( with sides parallel to the X-axis and Y-axis) and print the area of the rectangle.

Examples:

Input: N = 4, A = {1, 4, 2, 5, 3, 6, 7, 8}
Output: 9
Explanation: One possible way of making N pairs to get minimum rectangle area is {(1, 5), (2, 7), (3, 6), (4, 8)}
The minimum area rectangle has been shown in the following diagram:



Note: There maybe other ways to make N pairs such that the area remains minimum, but the minimum area remains 9.




Input: N = 3, A = {1, 3, 1, 1, 2, 1}
Output: 0: 0
*/

#include<iostream>
using namespace std;

int main(){
	int num=3,a[]={1, 3, 1, 1, 2, 1},i,j,k,temp;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i;j<n;j++){
			if(a[k]>a[j]){
				k=j;
			}
		}
		temp=a[k];
		a[k]=a[i];
		a[i]=temp;
		//a[k]=a[k]+a[i];
		//a[i]=a[k]-a[i];
		//a[k]=a[k]-a[i];
	}
	cout<<(a[num-1]-a[0])*(a[2*num-1]-a[num]);
	//for(i=0;i<n;i++)  
	//{cout<<a[i];
	//}
}
