#include<iostream>
using namespace std;

int hoarePartition(int arr[] , int l , int r){
    int pivot = arr[l];
    int i =l;
    int j = r;
    while(1){
        
        while(arr[i]<pivot){
            i++;
        }
        
        while(arr[j]>pivot){
            j--;
        }
        if(i>=j) return j;
        swap(arr[i++] , arr[j--]);

    }
}
int main(){
    int arr[] = {8,4,7,9,3,10,5};
    int j =hoarePartition(arr , 0 , 6);
    for(int i =0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<j;
    return 0;
}