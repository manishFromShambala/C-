/*
Given two integers A and B, and also given that Alice and Bob are playing a game starting with a bag containing N balls, in which, in a single move, a player can remove any number of balls between the range [A, B] and if the player cannot remove any balls, then the player loses, the task is to find the winner of the game if Alice and Bob play the game alternatively and optimally and Alice starts the game.

Examples:

Input: N = 2, A = 1, B = 1
Output: Bob
Explanation: 
One way in which the game can be played is:

Alice removes 1 ball, so the remaining balls are 1.
Now, Bob removes the last ball.
Alice cannot remove any balls, so she loses.
Input: N = 3, A = 1, B = 2
Output: Bob
*/

#include<iostream>
using namespace std;

int main(){
	int n=3,a=1,b=2;
	while(1){
		if(n==0){
			cout<<"Bob";
			break;
		}
		n=n-a;
		if(n==0){
			cout<<"Alice";
			break;
		}
		n=n-b;
		
	}
}
