#include<iostream>
#include<unordered_map>
using namespace std;

int majority1(int arr[] , int n){                       //using hashmap
    unordered_map<int , int> freq;
    for(int i =0; i < n ;i++){                         //O(n)
        freq[arr[i]]++;
        if(freq[arr[i]] > n/2)
            return arr[i];
    }
    return INT32_MIN;
}
int main(){

    int arr[] = {1,1,1,12,6,7};
    cout<<majority1(arr , 7 );
    return 0;

    
}