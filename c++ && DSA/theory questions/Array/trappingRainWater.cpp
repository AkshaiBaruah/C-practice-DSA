#include<iostream>
#include<unordered_map>
using namespace std;
//naive O(n^2) time O(1) space
int water_trapped1(int arr[] , int n){
    int water = 0;
    if(n<=2)
        return water;
    else{
        for(int i = 1 ; i<n-1 ; i++){
            int l_max = arr[i] , r_max  = arr[i];
            for(int j = i -1; j>=0 ; j--){
                l_max = max(l_max , arr[j]);
            }
            for(int j = i+1; j<n ; j++){
                r_max = max(r_max , arr[j]);
            }
            water += min(l_max , r_max) - arr[i];
        }
    }
    return water;
}

//
int water_trapped2(int arr[] , int n){
    int water =0;
    if(n<=2)
        return water;
    unordered_map<int , pair<int , int>> m;
    for(int i = 1 ; i<n-1 ; i++){
        int max =
        m[i].first;
    }
}

int main(){
    int arr[] = {4,2,0,2,1,1,2};
    cout<<water_trapped1(arr , 7);
    return 0;
}