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
        if(i>=j) return i;
        swap(arr[i++] , arr[j--]);

    }
}
int main(){
    int arr[] = {3,1,2,4,1};
    int j =hoarePartition(arr , 0 , 4);
    for(int i =0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<j;
    return 0;
}