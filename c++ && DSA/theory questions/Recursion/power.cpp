#include<iostream>
using namespace std;

int power(int n , int x){
    if(x==0)
        return 1;
    if(x%2 == 0)
        return power(n*n , x/2);
    else
        return n*power(n*n , (x-1)/2);
}
int main(){
    cout<<power(2,2);
}