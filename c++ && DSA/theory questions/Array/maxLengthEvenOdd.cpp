#include<iostream>
using namespace std;

int maxLengthEvenOdd(int arr[] , int n){
    int res =1;
    int curr_len = 1;
    for(int i =1 ; i< n ; i++){
        if(arr[i-1] %2 ==0 && arr[i] %2 !=0   ||   arr[i-1] %2 != 0 && arr[i] %2 ==0)
            curr_len++;
        else
            curr_len = 1;

        res = max(res , curr_len);
    }
    return res;
}
int main(){
    int arr[] = {10 , 12 ,8,4};
    cout<<maxLengthEvenOdd(arr , 4);
    return 0;
}