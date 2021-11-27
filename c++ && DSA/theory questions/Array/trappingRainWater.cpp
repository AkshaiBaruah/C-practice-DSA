#include<iostream>
using namespace std;

int water_trapped(int arr[] , int n){
    int water = 0;
    for(int i =1 ; i<n ; i++){
        if(arr[i] < arr[i-1]){
            int start = arr[i-1];
            int j = i+1;
            int end_wall = arr[j];
            while(j<n && j<= start){
                end_wall = max(end_wall , arr[j]);
            }
        }
    }
}
int main(){
    int arr[] = {3,0,1,2,5};
    cout<<water_trapped(arr , 5);
    return 0;
}