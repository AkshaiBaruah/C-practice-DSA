#include<bits/stdc++.h>
using namespace std;


int main(){
    int n , k;
    cin>>n>>k;
    int arr[n];
    int res;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int kth = arr[k-1];

    if(kth <=0){
        cout<<0;
        exit(0);
    }
    else{
        res = k;
        for(int i = k ; i<n ; i++){
            if(arr[i] < kth)
                break;
            res++;
        }
        cout<<res;
    }
    return 0;
}