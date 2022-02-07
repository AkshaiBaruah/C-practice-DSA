#include<bits/stdc++.h>
using namespace std;

void kLargest(int arr[] , int n , int k){
    priority_queue<int , vector<int> , greater<int> > pq(arr , arr + k);
    for(int i = k ; i<n ; i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    int arr[] = {5,15,10,20,8,25,18};
    int n = sizeof(arr)/4;
    kLargest(arr , n , 3);
    return 0;
}