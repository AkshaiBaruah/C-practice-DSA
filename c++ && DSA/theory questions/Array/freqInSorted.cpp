#include<iostream>
using namespace std;

void printFreq(int arr[] , int n){
    int curr_elem = arr[0] , cnt = 1;
    for(int i =1 ; i < n ; i++){
        if(arr[i] != curr_elem){
            cout<<curr_elem<<" "<<cnt<<endl;
            curr_elem = arr[i];
            cnt = 1;
        }
        else{ 
            cnt++;
        }
    }
    cout<<curr_elem<<" "<<cnt<<endl;
}

int main(){

    int arr[] = {10 , 10 , 10 , 20};
    printFreq(arr , 4);
    return 0;
}