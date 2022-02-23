#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj ,int s , bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto v : adj){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
int connectedComponents(vector<int> adj , int v){
    bool visited[v];
    int count = 0;
    for(int i = 0 ; i<v ;i++){
        if(!visited[v]){
            count++;
            BFS(adj , i , visited);
        }
    }
    return count;
}
int main(){
    
    return 0;
}