#include<iostream>
using namespace std;

void hoarePartition(int arr[] , int l , int r){
    int pivot = arr[l];
    int i =l;
    int j = r+1;
    while(1){
        
        while(arr[i]<pivot){
            i++;
        }
        
        while(arr[j]>pivot){
            j--;
        }
        if(i>=j) return ;
        swap(arr[i++] , arr[j--]);

    }
}
int main(){
    int arr[] = {5,3,8,4,2,7,1,10};
    hoarePartition(arr , 0 , 7);
    for(int i =0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}