#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int , int> maxmin(int arr[] , int n );
pair<int , int > maxmin2( int arr[] , int n );
int main(){
    int n{};
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    pair<int , int > result = maxmin(arr , n);
    cout<<result.first<<" "<<result.second<<endl;
    pair< int, int > result2 = maxmin2( arr , n);
    cout<<result2.first<<" "<<result2.second<<endl;


    
    return 0;
}


//linear method
pair<int , int> maxmin( int arr[] , int n){
    pair<int , int > result = {arr[0] , arr[0]};
    for(int i =0 ; i<n ; i++){
        if(arr[i] >= result.first)
        result.first = arr[i];
        if(arr[i] <= result.second)
        result.second = arr[i];

    }
    return result;
}

//another method (comparing in pairs) (fastest) 
pair<int , int > maxmin2( int arr[] , int n ) {
    pair<int , int >  result ;
    int i {};
    if(n%2 != 0){
        result = {arr[0] , arr[0]};
        i=1;

    }
    else{
        result = { max(arr[0] , arr[1]) , min(arr[0] , arr[1])};
        i=2;
    }
    while(i < n-1){

        //taking a pair of i and i+1 from array and finding the max
        if(arr[i] > arr[i+1]){
            if(arr[i] > result.first)
            result.first = arr[i];
        }
        else{
            if(arr[i+1] > result.first)
            result.first = arr[i+1];
        }

        //finding the min 
        if(arr [i] < arr[i+1]){
            if(arr[i] < result.second)
            result.second = arr[i];
        }
        else {
            if(arr[i+1] < result.second)
            result.second = arr[i+1];
        }

        i += 2 ;


    }
    return result;
}