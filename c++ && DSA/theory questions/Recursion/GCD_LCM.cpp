#include<iostream>
using namespace std;

int bruteGCD(int a , int b){
    int n = min(a , b);
    do{
        if(a%n == 0 && b%n==0)
            return n;
    }while(n--);
    return n+1;
}

int GCD(int a , int b){

    if(a%b == 0)
        return b;
    return GCD(b , a%b);
}

int LCM(int a , int b){
    return (a*b)/GCD(a,b);
}

int main(){
    cout<<bruteGCD(7,23)<<endl;
    cout<<GCD(12,24)<<endl;
    cout<<LCM(12,18)<<endl;

    return 0;
}