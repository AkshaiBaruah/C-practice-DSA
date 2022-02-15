#include<iostream>
using namespace std;
//brute   O(n^2)   O(1) space
int max_diff(int arr[] , int n){
    int max_diff = INT32_MIN;                 //initialize max diff as -inf;

    for(int i =0 ; i< n -1 ; i++){
        for(int j = i+1 ; j< n ;j++ ){        //for every i find j in its right(i+1 to n-1) such that diff is greater than max_diff that was prev found;
            max_diff = max(arr[j] - arr[i] , max_diff);
        }
    }
    return max_diff;                          //in this way we compare every two pair (arr[i],arr[j] : j>i) and find the max_diff among them;
}
//optimized     O(n) time    O(1) space
int max_diff2(int arr[] , int n){
    int ans = INT32_MIN;                 //initialize max_diff as -inf;     
    int smallest_till_j = arr[0];        //this is min so far in the array....for this min we have to find another element such that diff is greater than prev element 

    for(int j =1 ; j<n ; j++){           //for every j we will see the diff between arr[j] and the smallest in its left side(min_so_far);
        ans = max(ans , arr[j] - smallest_till_j);        //bcz for any j max diff would be generated only by taking its difference with the smallest in its left portion
        smallest_till_j = min(smallest_till_j , arr[j]);
    }
    return ans;
}
//ek j ka diff lena hoga to uske left mein jo sabse chota hai usse hi diff lenge na taki arr[j] - smallest_in_left maximum ho...(in arr[j] - arr[i]    if arr[i] is less the diff is more so for any j the least arr[i] is used which is called smallest_till_j )
int main(){
    int arr[] = {2,3,10,6,4,8,1};
    cout<<max_diff(arr , 7)<<endl;
    cout<<max_diff2(arr , 7)<<endl;
    return 0;
}