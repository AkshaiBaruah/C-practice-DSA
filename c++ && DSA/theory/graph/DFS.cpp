#include<bits/stdc++.h>
using namespace std;
int visited[ (int)1e+5] {};
void DFS(vector<int> adj[] , int v , int s , bool visited[] ={}){
    visited[s] = true;
    cout<<s<<" ";
    for(auto i : adj[s]){
        if(!visited[i])
            DFS(adj , v , i , visited);
    }

}
int main(){
    
    return 0;
}