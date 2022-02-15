#include<iostream>
using namespace std;

int cntNMerge(int arr[] , int l , int mid , int r){
    int n1 =mid - l+1;
    int n2 = r - mid ;
    int left[n1];
    int right[n2];
    for(int i =0 ; i<n1; i++){
        left[i] = arr[l+i];
    }
    for(int i =0 ; i<n2; i++){
        right[i] = arr[mid + 1 + i];
    }
    int i =0 ,j =0;
    int k =l;
    int res = 0;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
            res+= n1-i;
        }
        k++;
    }
    while(i<n1){
        arr[k] = left[i];
        i++; k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++; k++;
    }
    return res;
}

int countInv(int arr[] , int l , int r)
{   int cnt = 0;
    if(l<r){
        int mid = (l+r)/2;
        cnt+=countInv(arr , l , mid );
        cnt+= countInv(arr , mid+1 , r);
        cnt += cntNMerge(arr , l , mid , r);
    }
    return cnt;
}
int main(){
    int arr[] = {2,4,1,3,5};
    cout<<countInv(arr , 0 , 4);
    return 0;
}