#include<iostream>
using namespace std;

int sq_root(int n){                    //returns the floor when sqrt is in decimal
    int l = 1;
    int r = n;
    int res = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(mid*mid == n)
            return mid;
        else if(mid * mid > n)
            r = mid - 1;
        else{
            if((mid+1)*(mid+1) > n)
                return mid;
            else{
                res = mid;                  //this mid is a possible value for sqroot
                l = mid + 1;
            }
        }
    }
    return res;
}

int main(){
    cout<<sq_root(15);
    return 0;
}