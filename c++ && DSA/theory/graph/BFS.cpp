#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[] ,int v , int s){                            //s is the index of the source 
    bool visited[v] {};
    queue<int> q;                      //create a queue for first cum first
    q.push(s);
    visited[s] = 1; 
    while( !q.empty() ){
        int curr = q.front();         //the current vertex ( at first its the source(say 0))
        q.pop();
        cout<<curr<<" ";
        for(auto i : adj[curr]){         //in this loop we traverse the adj list of curr vertex(and push them if not visited) which is indeed BFS
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