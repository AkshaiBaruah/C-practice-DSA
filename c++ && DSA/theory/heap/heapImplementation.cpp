#include<iostream>
using namespace std;
struct minHeap{
    int cap;
    int size;
    int *arr;
    minHeap(int cap){
        this->cap = cap;
        arr = new int[cap];
        size =0;
    }

    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    int parent(int i){
        return (i-1)/2;
    }

    void insert(int data){                     //O(logn);
        if(size == cap){
            return;
        }
        arr[size] = data;
        size++;
        int i = size -1;
        int p = parent(size -1);
        while(p>=0 && arr[p] > arr[i]){
            swap(arr[p] , arr[i]);
            i = p;
            p = parent(i);
        }
    }
    void minHeapify(int i){                       //min heapify only corrects neeeche wale
        int smallest = i;                         //index of the smallest of the three
        int l = left(i);
        int r = right(i);
        if(l<size && arr[l]< smallest)            //if left exists and is smallest;
            smallest = l;
        if(r<size && arr[r]< smallest)            //if left exists and is smallest;
            smallest = l;
        
        if(smallest!=i){
            swap(arr[smallest] , arr[i]);
            minHeapify(smallest);
        }
    }
    int extractMin(){
        if(size == 0)
            return INT32_MAX;
        if(size == 1){
            size--;
            return arr[size];
        }
        int res = arr[0];
        swap(arr[0] , arr[size -1]);
        size--;
        minHeapify(0);

    }
    void decreaseKey(int i , int x){                     //since we are decreasing so bottom part os OK because it's smaller than descendants
        arr[i] = x;
        int p = parent(i);
        while(p>=0 && arr[p] > arr[i]){
            swap(arr[p] , arr[i]);
            i = p;
            p = parent(i);
        }
    }
    void remove(int i){
        if(i<0 || i>size-1)
            return;
        swap(arr[i] , arr[size -1]);
        size--;
        minHeapify(i);
    }
    void buildHead(){
        for(int i = (size -2)/2 ; i>=0 ; i--){       
            minHeapify(i);
        }
    }


};
int main(){
    return 0;
}