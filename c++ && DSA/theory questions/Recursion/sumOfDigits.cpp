#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n == 0 || n%10 ==0)
        return n;
    return sumOfDigits(n/10) + n%10;
}
int main(){
    cout<<sumOfDigits(12345);
    return 0;
}