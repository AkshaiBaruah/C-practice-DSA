#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[] , int s , bool visited[]){
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
    bool visited[v] {};
    for(int i = 0 ; i<v ; i++){
        if(!visited[i]){
            BFS(adj , i , visited);
        }
    }

}
int main(){
    
    return 0;
}