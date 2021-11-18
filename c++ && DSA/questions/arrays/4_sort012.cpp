#include<iostream>
#include<algorithm>
using namespace std;

void sort012( int arr[] , int n );

int main (){
    int n{};
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    sort012(arr, n );

    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
//My method (similar to DNF sort)
void sort012(int arr[] , int n ){
    int l = -1 , m = -1, r =n;
    int i = 0;              //iterator variable
    while(i<r){
        if(arr[i] ==0){
            l++;m++;
            swap(arr[i] , arr[l]);
            i++;
        }
        else if(arr[i] == 1){
            m++;
            swap(arr[m] , arr[i]);
            i++;
        }
        else if(arr[i] ==2){
            r--;
            swap(arr[r] , arr[i] );
        }
    }
}
