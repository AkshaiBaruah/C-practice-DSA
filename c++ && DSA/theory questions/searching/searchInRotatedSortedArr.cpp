#include<iostream>
using namespace std;


int Sorted_rotated_search(int arr[] , int n , int key){
    if(key == arr[0])
    return 0;
    else if(key > arr[0]){                            //key in left portion
        int l = 0;
        int r =n -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid] >= arr[0]){                    //mid is also in left portion so normal binary laga de
                if(arr[mid]==key)
                    return mid;
                else if(arr[mid] > key)
                    r = mid -1;
                else 
                    l = mid + 1;
            }
            else{                                     //mid in in right so need to gog left
                r = mid -1;
            }
        }
    }
    else{                                            //key is in right portion
        int s = 0;
        int e = n-1;
        while(s<=e){
            int centre = (s + e)/2;
            if(arr[centre] < arr[0]){               //mid also in right portion
                if(arr[centre] == key)
                    return centre;
                else if(arr[centre] > key)
                    e = centre -1;
                else
                    s = centre + 1;
            }
            else{
                s = centre + 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3};
    cout<<Sorted_rotated_search(arr, 2 , 1); 
    return 0;
}