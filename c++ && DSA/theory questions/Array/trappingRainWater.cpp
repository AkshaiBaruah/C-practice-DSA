#include<bits/stdc++.h>
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
            int limit = min(l_max , r_max);           //lowest val of limit can be arr[i] as l_max and r_max can't be lower than arr[i]; so water added in that case would be 0
            water += limit - arr[i];
        }
    }
    return water;
}

//optimized O(n) : two traversals
int water_trapped2(int arr[] , int n){
    int water =0;
    if(n<=2)
        return water;
    
    vector< pair<int,int> > v(n);
    int lmax = arr[0];
    int rmax = arr[n-1];
    
    for(int i = 0 ; i<n ; i++){
        lmax = max(arr[i] , lmax);
        rmax = max(arr[n-1-i] , rmax);
        v[i].first = lmax;
        v[n-1-i].second = rmax;
    }
    for(int i = 1; i<n-1 ; i++){
        lmax = v[i].first;
        rmax = v[i].second;
        int limit = min(lmax , rmax);
        water += limit - arr[i];
    }
    return water;
}

int main(){
    int arr[] = {3,2,1,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<water_trapped1(arr , n)<<endl;
    cout<<water_trapped2(arr , n);
    return 0;
}