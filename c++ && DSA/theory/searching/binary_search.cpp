#include<iostream>                       //BINARY SEARCH (ITERATIVE AND RECURSSIVE);
using namespace std;

int binary_search(int arr[] , int l , int r , int key){
    if(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            return binary_search(arr , key , mid + 1 , r);
        else
            return binary_search(arr, key , l , mid - 1);
    }
    return -1;
    
}

int binary_search2(int arr[] , int n , int key){
    int l = 0;
    int r = n-1;
    while(l<=r){
        int mid  = (l+r)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binary_search2(arr , 10 , 5)<<endl;                     //iterative
    cout<<binary_search(arr , 0 , 9  , 5);                         //recursive
    return 0;
}