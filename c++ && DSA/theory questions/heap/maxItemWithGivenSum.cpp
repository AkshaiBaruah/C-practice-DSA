#include<bits/stdc++.h>
using namespace std;
//method 1 : Just sort bruh
int maxItem(int arr[] , int n , int sum){
    sort(arr , arr+n);
    int res = 0;
    for(int i = 0 ; i<n ;i++){
        if(arr[i] < sum){
            sum -= arr[i];
            res++;
        }
        else break;
    }
    return res;
}
//******
void maxHeapify(int arr[] , int size , int i){
    int largest = i;
    while(1){
        int l = 2*i+1 ; int r = l+1;
        if(l<size && arr[l] > arr[largest])
            largest = l;
        if(r<size && arr[r] > arr[largest])
            largest = r;
        
        if(largest != i){
            swap(arr[i] , arr[largest]);
            i = largest;                          //arr[i] was placed in largest's place so we need to heapify for largest index also
        }
        else break;
    }
}
void buildMaxHeap(int arr[] , int n){
    for(int i = (n-2)/2 ; i>=0 ; i--){
        maxHeapify(arr , n , i);
    }
}
//using heap/priority_queue;
int maxItem2(int arr[] , int n , int sum){
    int res = 0;
    priority_queue<int , vector<int> , greater<int>> pq(arr , arr +n);           //O(n);

    while(pq.top()< sum){
        res++;
        sum-=pq.top();
        pq.pop();
    }
    return res;
}

int main(){
    int arr[] = {1,12,5,111,200};
    int n = sizeof(arr)/4;
    cout<<maxItem(arr , n , 10)<<endl<<maxItem2(arr , n , 10);
    return 0;
}