#include<bits/stdc++.h>
using namespace std;
bool visited[(int)1e+5] {};
void BFS(vector<int> adj[] , int s ){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        for(auto i : adj[curr]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
                
        }
    }
}
void disconnectedBFS(vector<int> adj[] , int v){
    
    for(int i = 0 ; i<v ; i++){           //do BFS considering every vertex as a source, in this way the vertices which are unreachable from a particular source (say 0) would be entertained
        if(!visited[i]){   
            BFS(adj , i );                //pass the adj list and current source
        }
    }

}
int main(){
    
    return 0;
}