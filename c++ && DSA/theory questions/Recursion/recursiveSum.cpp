#include<iostream>
using namespace std;

int Rsum1(int n){
    if(n==1)
        return n;
    return n+Rsum1(n-1);
}

int Rsum2(int n , int sum = 1 ){                    //tail recursion 
    if(n==1)
        return sum;
    return Rsum2(n-1 , sum + n);
}
int main(){
    cout<<Rsum1(5)<<endl;
    cout<<Rsum2(5)<<endl;
    return 0;
}