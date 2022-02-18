#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[] ,int v , int s){                            //s is the index of the source 
    bool visited[v] {};
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    while( !q.empty() ){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        for(auto i : adj[curr]){
            if(!visited[i]){
                q.push(i);
                visited[i] =true;
            }
        }
        
    }
}


int main(){
    
    return 0;
}