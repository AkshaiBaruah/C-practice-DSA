#include<iostream>
using namespace std;

int nCr(int n , int r){
    if(r==0)
        return 1;
    
   // if(r>n-r) r = n-r;
    return n*nCr(n-1 , r-1)/r;
}

int main(){
    cout<<nCr(10 , 6);
    return 0;
}