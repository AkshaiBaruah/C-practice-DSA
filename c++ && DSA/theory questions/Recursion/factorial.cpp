#include<iostream>
using namespace std;

long long fac1(int n){
    if(n==0 || n ==1)
        return 1;
    return n*fac1(n-1);
}

long long fac2(int n , int fact = 1){
    
    if(n==0 || n ==1)
        return fact;
        
    return fac2(n-1 , fact*n);
}

int main(){
    cout<<fac1(5)<<endl;
    cout<<fac2(1)<<endl;
}