#include <bits/stdc++.h>
using namespace std;
#define n 100000
 
// To keep correct and reverse direction
vector<int> a[n], b[n];
vector<bool> vis2[n];
 
bool p[n], q[n];
 

void AddEdge(int s, int t)
{
    a[s].push_back(t);    //add edge
    b[t].push_back(s);    // another edge
}
 

void dfs1(int x)
{
    p[x] = true;
 
    for (auto i : a[x])
        if (!p[i])
            dfs1(i);
}
 
// DFS function
void dfs2(int x)
{
    q[x] = true;
 
    for (auto i : b[x])
        if (!q[i])
            dfs2(i);
}
 
bool Is_Connected(int number)
{
    // Call for correct direction
    memset(p, false, sizeof p);
    dfs1(1);
 
    // Call for reverse direction
    memset(q, false, sizeof q);
    dfs2(1);
 
    for (int i = 1; i <= number; i++) {
 
        // If any vertex it not visited in any direction
        // Then graph is not connected
        if (!p[i] and !q[i])
            return false;
    }
 
    // If graph is connected
    return true;
}
 
// Driver code
int main()
{
    int number = 4;
 
    // Adding edges
    AddEdge(1, 2);
    AddEdge(1, 3);
    AddEdge(2, 3);
    AddEdge(3, 4);
 
    // Function call
    if (Is_Connected(number))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
