#include<iostream>                  //leader = right walo se bada
using namespace std;


//we traverse the array from right.....well rightmost(last) element to hoga hi leader..after that for every i(from n-2 to 0) we just need to see prev leader se bada hai ki nhi agar hai to automatic right mein saare elements se bada ho jayega ...and we keep track of curr_leader
void leader(int arr[] , int n){
    int curr_leader = INT32_MIN;          

    for(int i = n-1 ; i>=0 ; i--){
        if(arr[i] > curr_leader){             //for any i we ask if arr[i] is greater than curr_leader, if yes then print it and arr[i] becomes curr_leader
            cout<<arr[i]<<" ";
            curr_leader = arr[i];
        }
    }

}

int main(){
    int arr[] = {7,10,4,10,6,5,2};
    leader(arr , 7);
    return 0;
}