#include<iostream>                          //Moore's voting algorithm
using namespace std;

int maj(int arr[] , int n , int x , int y){
    int x_cnt = 0 , y_cnt = 0;
    for(int i =0; i<n ;i++){
        if(arr[i] ==x) x_cnt++;
        else if(arr[i] == y) y_cnt++;
    }
    return (x_cnt>=y_cnt)? x : y;
}
//driver code
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i] ;
        
    }
    int x , y;
    cin>>x>>y;
    cout<<maj(arr , n , x  , y)<<" has the majority\n";

    return 0;
}