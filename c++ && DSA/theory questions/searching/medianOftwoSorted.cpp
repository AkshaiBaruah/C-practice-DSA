#include<iostream>
using namespace std;

float median(int a[] , int b[] , int n1 , int n2){
    int n = n1+n2;
    int mid = n/2;
    int i =0;
    int j =0;
    int i_val;
    int j_val;
    while(i<n1 && j<n2 && mid--){
        if(a[i]<b[j]){
            i_val = i;
            i++;
        }
        else {
            j_val = j;
            j++;
        }
    }
    while(i<n1 && mid--){
        i++;
    }
    while(j<n2 && mid--){
        j++;
    }
    int res = max(i ,j);

}
int main(){
    return 0;
}