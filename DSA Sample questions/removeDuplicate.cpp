#include<iostream>
using namespace std;

int remove(int arr[] , int n , int l , int r ){
    int newN = n - (r - l );
    if(r>l){
        for( int i = r+1 ; i< n; i++){
            arr[l+1] = arr[r+1];
            l++;r++;
        }
    }
    return newN;
}

int removeDuplicate( int arr[] , int n){
    int l = 0 ; int r = 0;
    for(int i =0 ; i <n -1 ; i++){
        if(arr[i+1]==arr[i]){
            r=i+1;
        }
        else {
            n = remove(arr , n , l , r);
           
                l++;
                r = l;
                
           
            i=l-1;
        }
    }
    n =remove (arr , n , l , r);
    return n;
}
int main(){

    int arr[] = {10,10,10,5,2020,2020};
    int n = sizeof(arr)/sizeof(int);
    int size = removeDuplicate( arr , n);
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}