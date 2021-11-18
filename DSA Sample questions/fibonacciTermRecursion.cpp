                                   //Fibonacci term using recursion
#include<iostream>
using namespace std;
 
int fibonacci_term(int);
int main(){
    int t = 8;
    int sum = fibonacci_term(t);
    cout<<sum;
    return 0;
}

int fibonacci_term( int t){
    if( t <= 1)
    return t;
    return fibonacci_term(t-1) + fibonacci_term(t-2);

}



