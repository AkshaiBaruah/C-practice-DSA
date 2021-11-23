#include<iostream>
using namespace std;

void TOH(int n , char a , char b , char c){
    if(n==0)
        return;
    TOH(n-1 , a , c , b);
    cout<<"move disc "<<n<<" from "<< a<< " to "<<c<<endl;
    TOH(n-1 , b , a , c);
}

int main(){
    TOH(3, 'A' , 'B' , 'C');
}