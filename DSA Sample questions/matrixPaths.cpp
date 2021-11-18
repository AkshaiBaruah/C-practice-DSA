//Find the number of ways to go to the last of a given mxn matrix
#include<iostream>
using namespace std;

int ways(int , int );
int main(){
    int n = 5,m=6;
    int result = ways(n,m);
    cout<<result;
    return 0;
}

int ways( int n , int m){
    if( n ==1 || m==1)
    return 1;
    return ways(n-1 , m) + ways(n,m-1);
}