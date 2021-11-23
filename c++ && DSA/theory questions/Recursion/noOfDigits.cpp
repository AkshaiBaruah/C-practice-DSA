#include<iostream>
using namespace std;

int nDigits1(int n){
    if(n<10)
        return 1;
    return nDigits1(n/10) + 1;
}

int nDigits2(int n , int ans = 1){                 //tail recursion for tail call elimination;
    if(n<10)
        return ans;
    return nDigits2( n/10  , ans +1);
}
int main(){
    cout<<nDigits1(34987)<<endl;
    cout<<nDigits2(34987);
    return 0;
}