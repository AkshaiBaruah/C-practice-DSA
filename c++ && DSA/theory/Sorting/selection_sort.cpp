#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n );      //selection sort function

int main(){

    int n;
    cin>>n;
    int arr[n] {};
    for (int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    selection_sort( arr , n );
    cout<<"\nThe sorted array is : \n";
    for (int i =0 ; i<n ; i++){
        cout <<arr[i]<<" ";
    }

    return 0;
}

void selection_sort(int arr[] , int n ){
    for (int i =0 ; i<n-1; i++){                // i loop for the place where smallest element will be put.
        int min_index = i;                      // we take the index of i to be smallest by default
        for(int j = i+1; j<n ;j++){             // j loop for the unsorted part of array after i to find the smallest from it and swap it with i index
            if (arr[j] <= arr[min_index] )
            min_index = j;                      // the index of the smallest element in the unsorted part is stored(in min_index) so that we can swap arr[i] and arr[min_index]
        }                                       // the min_index is marked and not the smallest element itself because we have to swap by reference.
        swap(arr[i] ,arr[min_index]);
        
    }
}