#include<iostream>
using namespace std;

void Rprint(int arr[] , int n){
    if(n==0)
    return;
    Rprint(arr , n-1);
    cout<<arr[n-1]<<" ";
    
}

void Rprint2(int arr[] , int n , int index = 0){      // this is tail recursion;
    if(index == n)
    return;
    cout<<arr[index]<<" ";
    Rprint2(arr , n , index+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    Rprint(arr , 8);
    cout<<endl;
    Rprint2(arr , 8);
}