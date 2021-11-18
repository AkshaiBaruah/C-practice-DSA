                                                //Taylor series using recursion 
#include<iostream>
using namespace std;
float e( int , int );
int main(){
    int x = 3;
    int t = 10;
    float result = e(x,t);
    cout<<result;
    return 0;

}


float e(const int x , int t){
    static int p = 1;
    static int f = 1;
    if(t==0)
    return 1;
    float r = e(x , t-1);
    p*=x;
    f*=t;
    return r + (float)p/f;

}