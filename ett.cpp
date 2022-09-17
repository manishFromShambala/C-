#include<bits/stdc++.h>
using namespace std;

int leastCommonDescendent(int nodes[], int N, int node1, int node2)
{
  int *visited = new int [N];
  int cnt1 = 0; //used for counting length of path from node1 to node2
  int cnt2 = 0; //used for counting length of path from node2 to node1
  int mark = node1; //storing as a marker needed later for detecting end of search

  if(node1 == node2) return node2;
  for(int i = 0; i < N; i++){
    visited[i] = 0;
  }

  while((nodes[node1] != node1) && (nodes[node1] != -1) && (visited[node1] == 0) && (node1 != node2)){
    visited[node1]++;
    node1 = nodes[node1];
    cnt1++;
  }

  visited[node1]++; //so that first node in cycle has count 2
                    //if find a node in 2nd iteration that has count 2
                    //such that when node1 == node2 it means we are in the same subgraph
                    //elsif node1 != node2 we are in different sub graphs

  while((nodes[node2] != node2) && (nodes[node2] != -1) && (visited[node2] != 2) && (node1 != node2)){
    visited[node2]++;
    node2 = nodes[node2];
    cnt2++;
  }
  //In below case the nodes are in different disjoint subgraphs
  //and both subgraphs have loops so node1 can never be equal to node2
  //cout << visited[node1] << visited[node2] << endl;
  if(node1 != node2) return -1;
    //In below case both nodes are in different disjoint subgraphs
    //but there is no loop in 1st one(containing node1)
    //and 2nd one has a loop
  if ((nodes[node1] == -1) && (visited[node2] == 1)) return -1;
    //In below case both nodes are in different disjoint subgraphs
    //but 1st one has a loop and second one doesn't
  if(nodes[node2] == -1) return -1;
    //In below case both nodes are in same subgraph so we
    //need to check the length of two alternate paths
  if(cnt1 > cnt2)
    return node2;
  else
    return mark;
}

int main(){
	int arr[23]={4,4,1,4,13,8,8,8,0,8,14,9,15,11,-1,10,15,22,22,22,22,22,21};
	int n1=21,n2=22;
	cout<<leastCommonDescendent(arr, 23, n1,n2);
}
