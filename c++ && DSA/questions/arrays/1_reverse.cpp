#include<iostream>
#include<algorithm>
using namespace std;

template <class T>
void reverse( T arr[] , int n);
template<class T>
void reverse2( T arr[] , int l , int r);
int main(){

    int n {};
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    reverse2(arr , 0,n-1);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
//iterative function using two pointer method
template <class T>
void reverse(T arr[] , int n ){
    int l = 0 , r = n-1;                 //two pointer
    while(l<r){
        swap(arr[l] , arr[r]);
        l++ ; r--;
    }
}

//recursive function using two pointer method
template<class T>
void reverse2( T arr[] , int l , int r){                 //two pointer l and r
    if(l>=r)
    return ;
    swap(arr[l] , arr[r]);
    reverse2(arr , l+1 , r-1);
}