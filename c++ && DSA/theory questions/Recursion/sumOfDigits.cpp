#include<iostream>
using namespace std;
//normal recursion
int sumOfDigits(int n){
    if(n == 0 || n%10 ==0)
        return n;
    return sumOfDigits(n/10) + n%10;
}
//tail recursion
int sumofDigits2(int n , int sum =0){
    if(n<10)
        return n+sum;
    return sumofDigits2(n/10 , sum + n%10);
}

int main(){
    cout<<sumOfDigits(12345)<<endl;
    cout<<sumofDigits2(12345);
    return 0;
}