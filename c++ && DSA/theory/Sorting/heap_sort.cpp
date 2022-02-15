#include<iostream>
using namespace std;
//remember heapify always works downwards;
//iterative max heapify
void maxHeapify(int arr[] , int size , int i){   //this is used the correct only one element downwards to satisfy heap property
    int largest = i;                             //index of largest, initialized to i;
    
    while(1){
        int l = 2*i+1; int r = l+1;              //index of left and right of i;

        if(l < size && arr[l] > arr[largest])    //if left exist and is largest then assign to largest
            largest = l;
        
        if(r < size && arr[r] > arr[largest])    //do same as did to left
            largest = r;
        
        if(largest != i){                        //if largest is not i only then do swapping
            swap(arr[i] , arr[largest]);
            i = largest;
        }
        else break;                              //if largest is i, it means it's a heap;
    } 
}
//basic build function
void buildMaxHeap(int arr[] , int n){           //function to make an array into a maxheap(the build heap)
    for(int i = (n -2)/2 ; i>=0 ; i--){
        maxHeapify(arr , n , i);           
    }
}
//idea : build max heap->delete arr[0] which fixes it at the end->size--;
void heap_sort(int arr[] , int n){           
    buildMaxHeap(arr , n);                         //makes arr a max heap;
    for(int i = 0 ; i<n-1 ; i++){
        swap(arr[0] , arr[n-i-1]);            //n-i is the curr size so n-i-1 is the index of last element;
        maxHeapify(arr , n-i-1 , 0);          //after swapping the arr size must be reduced by 1 to fix the largest at the end
    }
}
int main(){
    int arr[] = {5,4,3,1,2};
    int n = sizeof(arr)/4;

    heap_sort(arr , n);
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}