                                                    //power using recursion
#include<iostream>
using namespace std;
int power( int , int );

int main(){
    int a =2;
    int b = 5;
    int pow = power(a , b );
    cout<<pow;
    return 0;
}

int power( int a , int b){
    if(b ==0)
    return 1;
    if(b%2 ==0)
    return power(a*a , b/2);
    else
    return a*power(a*a , (b-1)/2);
}
