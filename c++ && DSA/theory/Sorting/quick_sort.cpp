#include<iostream>
using namespace std;

int Lpartition(int arr[] , int l ,int r){
    int pivot = arr[r];
    int i = l;
    int j =l;
    while(j<r){
        if(arr[j] < pivot){
            swap(arr[i] , arr[j]);
            i++;
        }
        j++;
    }
    swap(arr[i] , arr[r]);
    return i;
}
int Hpartition(int arr[] , int l , int r){
    int pivot = arr[l];
    int i = l;
    int j = r;
    while(1){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i>=j) return j;
        swap(arr[i++] , arr[j--]);
    }
}
void qSort1(int arr[] , int l , int r){            //using lomuto partition
    if(l<r){
        int p = Lpartition(arr, l ,r);
        qSort1(arr , l, p-1);
        qSort1(arr, p+1 ,r);
    }
}

void qSort2(int arr[] , int l , int r){            //using hoare partition
    if(l<r){
        int p = Hpartition(arr , l , r);
        qSort2(arr , l , p);
        qSort2(arr , p+1 , r);
    }
}
int main(){
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(int);
    qSort2(arr,0 , n-1);
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}