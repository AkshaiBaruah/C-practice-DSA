#include<iostream>
using namespace std;

void insertion_sort( int arr[] , int );

int main(){
    int n{};
    cin >> n;
    int arr[n]{};
    for(int i =0 ; i<n ; i++){
        cin>> arr[i];
    }
    cout<<"The unsorted array is : \n";
    for( int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    insertion_sort(arr , n );

    cout<<"\nThe sorted array is : \n";

    for( int i =0 ; i<n ; i++){
        cout<<arr[i] << " ";
    }


    return 0;

}


//Standart solution
/*
void insertion_sort ( int arr[] , int n ){
    for (int i = 1 ; i<n ; i++){
        int key = arr[i];                  //element to be inserted in sorted part
        int j = i-1 ;                      //because we will have to place in a position in the sorted part which starts from i-1 and goes backwards.
        while ( arr[j] > key && j>=0  ){   //because if arr[j] <= key found then its right position will be the place for kay
            arr[j+1] = arr [j];            // shift jth element by 1 position right i.e. to j+1
            j--;                           
        }
        arr[j+1] = key;                   //when j is found such that arr[j] < key then we know the next position of j i.e. (j+1) will be of key..and also if j=0 then key will have to be placed in first position.
    }
}*/


//what I thought

void insertion_sort( int arr[] , int n ){
    for ( int i =1 ; i<n ; i++){
        int key = arr[i];                 //element to be inserted in sorted part 
        for(int j =i-1 ; j>=0 ; j--){     //backwards iteration of the sorted part ; henve starts from i-1
            if( arr[j] <= key ){          //the first elem in the sorted array found to be smaller than key then its right position(j+1) is the position of the key.
                arr[j+1] = key;
                break;
            }
            arr[j+1] = arr[j];            //If key < arr[j] then shift j to j+1 position and insert key in j temporarily.
            arr[j] = key;
        }
    }
}

