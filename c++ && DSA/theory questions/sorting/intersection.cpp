#include<iostream>
using namespace std;

int intersection(int a[] , int b[] , int n1 , int n2){
    int i =1;
    int j =1;
    while(i<n1 && j<n2){
        if(a[i] == b[j]){
            cout<<a[i];
            i++; j++;
        }
        else if(a[i] < b[j])
            i++;
        else j++;

    }
}
int main(){

}