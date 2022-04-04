#include<bits/stdc++.h>
using namespace std;


int main(){
    int n , k;
    cin>>n>>k;                   //k<=n
    int arr[n];
    int cnt = 0;
    for(int i = 0 ; i<n ; i++){          //10 9 8 7 7 7 5 5
        cin>>arr[i];

        if(i<k && arr[i] > 0)
            cnt++;
        else{
            if(arr[i] >= arr[k-1] && arr[i] > 0)
                cnt++;
        }
    }
    cout<<cnt;



    
    
    return 0;
}