#include<iostream>
using namespace std;

int maxConsecutive1s(int arr[] , int n){
    int cnt =0;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] ==1)
            cnt++;
        else    
            cnt = 0;
        ans = max(ans , cnt);
    }
    return ans;
}
int main(){

    int arr[] = {0,0,0,0};
    cout<<maxConsecutive1s(arr , 4);
    return 0;
}