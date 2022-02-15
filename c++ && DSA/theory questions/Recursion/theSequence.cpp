#include<iostream>
using namespace std;

int TheSeq(int n){
    if(n ==0)
        return 1;
    return n + n*TheSeq(n-1);
}
int main(){
    cout<<TheSeq(3);
    return 0;
}