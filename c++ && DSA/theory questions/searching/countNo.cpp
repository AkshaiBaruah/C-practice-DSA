#include<iostream>                       //count no of occurences of an element in a given sorted array;
using namespace std;

int first_occcr(int arr[] , int n , int key){
    int l = 0 ; int r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] < key)
            l = mid+1;
        else if(arr[mid] >key)
            r = mid -1;
        else{
            if(mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                r = mid -1;
        }
    }
    return -1;
}

int last_occur(int arr[] , int n , int key){
    int l = 0 ; int r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] < key)
            l = mid+1;
        else if(arr[mid] >key)
            r = mid -1;
        else{
            if(mid == n-1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                l = mid + 1;
        }
    }
    return -1;
}

int count_occur(int arr[] , int n , int key){
    int f = first_occcr(arr , n , key);
    int l = last_occur(arr , n , key);
 
    return ((l+f) == -2)? 0 : l-f+1;
}

int main(){
    int arr[] = {1,2,3,4,5,5,5,8,9,10};
    cout<<count_occur(arr , 10 , 53);              //(array , size , key)
}