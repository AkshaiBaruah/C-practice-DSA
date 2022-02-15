#include<iostream>
using namespace std;

int stonks2(int arr[] , int n){
    int profit = 0;
    for(int i =1 ; i< n ; i++){
        if(arr[i] > arr[i-1])
            profit+= arr[i] - arr[i-1];
    }
    return profit;
}
int main(){
    int arr[] = {30 , 20 , 10};
    cout<<stonks2(arr , 3);
    return 0;
}