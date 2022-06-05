#include<iostream>
using namespace std;
bool isEven(int x){
    return (x%2 == 0);
}
bool isOdd(int x){
    return (x%2 != 0);
}
bool isAlternating(int a , int b){
    if( isEven(a) && isOdd(b)   ||   isOdd(a) && isEven(b) )
        return true;
    return false;
}
int maxLengthEvenOdd(int arr[] , int n){
    int res =1;           //this would be the min result obv;
    int curr_len = 1;     //"
    for(int i =1 ; i< n ; i++){
        if( isAlternating(arr[i-1] , arr[i]) )      //if(alternate)
            curr_len++;          //considering the prev curr_len we increment if alternating fashion is followed
        else
            curr_len = 1;        //else we just reset it in ith element

        res = max(res , curr_len);             //res changes only if we found new max length of alternating OE
    }
    return res;
}
int main(){
    int arr[] = {10 , 13 ,8,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxLengthEvenOdd(arr , n);
    return 0;
}