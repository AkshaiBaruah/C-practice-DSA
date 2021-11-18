                                        //sum using recursion
#include<iostream>
using namespace std;

int sumUsingRecursion( int );
int main(){
    int n = 5;
    int sum = sumUsingRecursion(n) ;
    cout<<sum;
    return 0;
}

int sumUsingRecursion( int n){
    if(n == 0 || n ==1)
    return n;
    else 
    return n + sumUsingRecursion(n-1);
}
