#include<iostream>
#include<algorithm>
using namespace std;

int kthMin(int arr[] , int , int);
int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<endl<<kthMin(arr , n ,k);

    
    return 0;
}
//first method nby sorting 
int kthMin( int arr[] , int n , int k){
    sort(arr , arr+ n);
    return arr[k-1] ; 
}