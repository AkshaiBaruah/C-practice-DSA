#include<iostream>
using namespace std;
int sum (int n)
{ int x;
   //x=n;       not necessary
   //x= n%10;   not necessary as n%10 can be directly used in the expression
   
    while(n!=0)
    return n%10 +sum(n/10);
    return 0;
}


int main()
{
    int n{};
    
    cout<<"enter a number"<<endl;
    cin>>n;
    
    cout<<"sum of digits of the number is"<<endl;
    cout<<sum(n);
    
    
}