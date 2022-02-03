#include<iostream>
using namespace std;
//checks for ascending sorted from indices l to r
bool isAscSorted(int arr[] , int l , int r){           //l->left index , r->right index

    for(int i = l; i<r ; ++i){                         //loop from l till least second of right index because i+1 is accessed
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

bool isDesSorted(int arr[] , int l , int r){
    for(int i = l; i<r ; ++i){
        if(arr[i] < arr[i+1])
            return false;
    }
    return true;
}

bool isSorted(int arr[] , int n){
    for(int i = 0; i<n-1 ; i++){
        if(arr[i] == arr[i+1])
            continue;
        else if (arr[i] < arr[i+1]){                   //1,1,1,1,1,1,1,1,2,3,4,5
            return isAscSorted(arr , i+1, n-1);
        }
        else{
            return isDesSorted(arr , i+1 , n-1);
        }
    }
    return true;
}
//driver code
int main(){

    int arr[] = {10,5,3,3,2,2,2,2};
    cout<<boolalpha<<isSorted(arr , 8);
    return 0;

}