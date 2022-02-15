#include<iostream>
using namespace std;

int secondMax(int arr[] , int n){
    pair<int , int > pr;               //pair of max and second max;
    
    if(n==0)                           //if no elements return -inf;
        return INT32_MIN;

    if(n==1)                           //if only one element return that;
        return arr[0];

    if(n>1){                           //if 2 or more elements then initialize max and second max from the first two elements and check from the third element after that 
        pr.first = max(arr[0], arr[1]);
        pr.second = arr[0] + arr[1] 
        - pr.first;
    }

    for(int i =2; i <n ; i++){
        if(arr[i] > pr.first){
            pr.second = pr.first;
            pr.first = arr[i];
        }
        else{
            pr.second = max(pr.second , arr[i]);
        }
    }
    return pr.second;
}

int main(){
    int arr[] = {1,20,3,4,5,6,7,8,19,100};
    cout<<secondMax(arr , 10);
    return 0;
}