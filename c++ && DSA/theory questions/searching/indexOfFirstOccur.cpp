#include<iostream>
using namespace std;
//recursive
int first_occur(int arr[] , int l , int r , int key){
    if(l<=r){
        int mid = l + (r-l)/2;                       //same as (l+r)/2;
        if(arr[mid] < key)
            return first_occur(arr , mid + 1 , r , key);
        else if(arr[mid] > key)
            return first_occur(arr , l , mid - 1 , key);
        else{
            if(mid == 0 || arr[mid-1] != arr[mid])                      //here mid = 0 condition is checked first bcz if mid is 0 then if will be true so we won't compute mid -1;
                return mid;
            else    
                return first_occur(arr , l , mid -1 , key);
        }
    }
    return -1;
}
//iterative
int first_occur2(int arr[] , int n , int key){
    int l = 0;
    int r = n -1;
    while(l<=r){
        int mid = l + (r-l)/2;                          //same as (l+r)/2;
        if(arr[mid] < key)
            l = mid + 1;
        else if(arr[mid] > key)
            r = mid - 1;
        else{
            if(mid == 0 || arr[mid -1] != arr[mid])
                return mid;
            else   
                r = mid -1;
        }
    }
    return -1;

}

int main(){
    int arr[] = {1,1,1,1,1,1,2,3,6,7,19};
    cout<<first_occur(arr , 0 , 10, 12)<<endl;
    cout<<first_occur2(arr , 11 , 12);
    return 0;
}