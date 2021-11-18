#include<iostream>
using namespace std;

void swap( int *  , int * );
void bubble_sort(int arr[] , int n);

int main(){
    int n;
    cin>> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>> arr[i];
    }
    cout<<"The unsorted array is : \n";
    for( int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    bubble_sort ( arr , n);
    cout<<"\nThe sorted array is : \n";
    for( int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    return 0 ;
}

void swap( int * a , int * b){                         //typical swap function
    int temp = *a ;
    *a = *b ;
    *b = temp;
}
void bubble_sort(int arr[] , int n){
    for (int i =0 ; i < n-1 ; i++){
        for (int j =0 ; j < n - 1 - i ; j++){          //because the largest element will go to the last position and second largest in second last and so on(in every iteration of i loop) so j loop has to be "i" iteration less each time as correct element gets placed in last, iteration by iteration
            if( arr[j] >= arr[j+1])                    //if right_item(j+1) is smaller than left(j) then swap them ..again in the next j iteration the aage ke do elements will be compared and this way largest will be at the last.
            swap(&arr[j+1] , &arr[j]);
        }
    }
}