#include<bits/stdc++.h>
using namespace std;

void kClosest(int arr[] , int n , int k , int x){
    
    priority_queue<pair<int , int> >pq;             //pq to store diff and index, max heap bc need to remove the max diff at each step
    for(int i = 0 ; i<k ; i++){                     //first store the first k diff(distance) in the pq
        int diff = abs(x - arr[i]);
        pq.push({diff , i});
    }
    for(int i = k ; i<n ; i++){                     //after that for each elem, see if it has lower dist than the highest so far
        int edge = pq.top().first;                  //the highest distance is called edge
        int diff = abs(x - arr[i]);                 //diff is always the distance of curr elem in arr from x
        if(diff < edge){                            //if that dist is less than highest distance then its more closer
            pq.pop();                               //so pop the earlier and push this new and better candidate
            pq.push({diff , i});
        }
    }
    while(!pq.empty()){                             //after that just print or store in a vector or whatever we got the elements in a pq;
        int i = pq.top().second;  pq.pop();
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1 , 2 ,3 ,4, 5};
    int n = sizeof(arr)/sizeof(int);
    kClosest(arr , n , 4 , 3);
    return 0;
}