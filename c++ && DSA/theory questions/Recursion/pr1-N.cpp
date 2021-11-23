#include<iostream>
using namespace std;

void Rprint(int n){
    if(n == 0)
        return;
    Rprint(n-1);
    cout<<n<<" ";
}

int main(){
    Rprint(7);
    return 0;
}