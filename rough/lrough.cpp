#include<bits/stdc++.h>
using namespace std;

 vector<int> getRow(int row) {
    queue<int> q;
    q.push(0);
    q.push(1);
    q.push(0);
    for(int i = 0 ; i<row ; i++){
        int n = q.size() - 1;
        while(n--){
            int a = q.front();
            q.pop();
            int b = q.front();
            q.push(a + b);
        }
        q.push(0);
    }
    vector<int> ans ;
    q.pop();
    for(int i = 0 ; i<q.size()  ; i++){
        int a = q.front();
        q.pop();
        ans.push_back(a);
    }
    
    return ans;
}
int main(){
    
    return 0;
}