#include<iostream>
using namespace std;
void merge ( int arr[] , int , int , int );
void merge_sort( int arr[] , int , int);
int main(){
    int n {} ;
    cin >> n;
    int arr [n];
    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout<<"The unsorted array is : \n";
    for(int i =0 ; i<n ; i++){
        cout<< arr[i] << " ";
    }
    merge_sort( arr , 0 , n-1);

    cout<<"\nThe sorted array is : \n";
    for(int i =0 ; i<n ; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

void merge ( int arr[] , int l , int mid , int h){
    int n1 = mid - l + 1 , n2 = h - mid;
    int left[n1]{} , right[n2];
    int k =l ;

    for(int i = 0 ; i<n1 ; i++){             //copy the left elements into left array
        left[i] = arr[l + i];
    }
    for(int i = 0 ; i<n2 ; i++){             //copy the right elements into right array
        right[i] = arr[mid + 1 + i];
    }

    int i =0 , j=0;
    while( i < n1 && j < n2 ){               //runs until any of the array(left or right) finishes

        if(left[i] <= right[j]){             //if the element in left array is smaller then we copy that into the main array
            arr[k] = left[i];
            i++; k++;
        }
 
        else{                               //if right smaller then we copy element of right array to main array
            arr[k] = right[j];
            j++; k++;
        }
    }
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }

}

void merge_sort(int arr[] , int l , int h ){
    
    if (l < h){
        int mid = l + (h - l)/2;              //we can right l+h but it may exceed limits of integer or so 
        merge_sort( arr , l ,mid);
        merge_sort( arr, mid +1 , h);
        merge( arr , l , mid , h);
    }
}