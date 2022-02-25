#include<iostream>
using namespace std;

int maxPieces(int n , int a , int b , int c){
    if(n<0)            //base case;
    return -1;
    if(n==0)           //base case 2;
    return 0;

    int next_step = max( maxPieces(n-a , a , b , c) , max(maxPieces(n-b , a , b , c) , maxPieces(n-c , a , b , c))) ;

    if(next_step == -1)
        return -1;
    
    return next_step + 1;
}

int mp2(int arr[] , int n , int sum){
    

    int next_step = mp2(arr , n-1 , sum);
    if(arr[n-1] <= sum)
    next_step;
}
//driver code
int main(){
    cout<<maxPieces(23, 12 ,9 ,11);
    return 0;
}