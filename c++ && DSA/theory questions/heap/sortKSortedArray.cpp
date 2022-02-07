#include<iostream>
#include<queue>

using namespace std;

void sortKSortedArray(int arr[] , int n , int k){
    priority_queue< int , vector<int> , greater<int> > pq(arr , arr+k+1);     //make a minheap of first k+1 elements because they mau go to 0th pos
                                                                              
    int partn = 0;                                   //partition of sorted and unsorted part : size of sorted part;
    for(int i = k+1 ; i<n ; i++){
        int elem = pq.top();                         //smallest till k elems which is to be at adge of k;
        arr[partn++] = elem;
        pq.pop();
        pq.push(arr[i]);
    }

    while(!pq.empty()){
        int elem = pq.top();                         //index of the smallest element in the unsorted part
        arr[partn++] = elem;
        pq.pop();
    }
}
int main(){
    int arr[] = {9,8,7,18,19,17};
    int n = sizeof(arr)/sizeof(int);
    sortKSortedArray(arr , n , 2);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}