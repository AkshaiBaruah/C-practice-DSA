                                        //Factorial using recursion
#include<iostream>
using namespace std;
int factorial ( int);
int main(){
    int n =6;
    int fac = factorial(n);
    cout<<fac;
    return 0;
}

int factorial( int n ){
    if(n==0)
    return 1;
    else 
    return n*factorial(n-1);
}