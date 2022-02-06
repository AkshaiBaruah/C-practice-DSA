#include<bits/stdc++.h>
using namespace std;

int twoSum(int arr[] , int n , int target){
    unordered_set<int> s;
    for(int i =0 ; i<n ; i++){
        int a = arr[i];                             //target is a+b
        int b = target - a;
        if( s.find(b) != s.end() )
            return 1;
        else s.insert(a);
    }
    return 0;
}
int main(){
    int arr[] = {4,3,5,6};
    cout<<twoSum(arr , 4 , 12);
    return 0;
}