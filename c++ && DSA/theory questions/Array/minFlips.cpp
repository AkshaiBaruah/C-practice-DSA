#include<iostream>
using namespace std;

void minFlips(int arr[] , int n){
    for(int i =1; i<n ; i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<(i-1)<<endl;
        }
    }
    if(arr[n-1] != arr[0])
        cout<<(n-1)<<endl;
}
int main(){
    int arr[] = {0,0,1,1,0,0,1,1,0,1,0,0};
    minFlips(arr , 10);
    return 0;
}