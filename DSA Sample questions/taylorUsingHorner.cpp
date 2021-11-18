                                            //Taylor series using Horner's rule 
#include<iostream>
using namespace std;
float e( int , int );
int main(){
    int x = 3;             //power of e
    int t = 10;            // number of terms of the series
    float result = e( x , t);
    cout<<result;
    return 0;
}

float e ( const int x , int t){
    static float s =1;
    if(t==0)
    return s;                   //we will return s at last first we will store the value in s from t = n to t=1..after its stores , we will return when t =1
    s = 1 + (float)x/t*s;       //storing the value in s 
    return e(x , t-1);          //calling for reduced value off to that we can further calculate s 
}
