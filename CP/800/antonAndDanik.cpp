#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int a = 0 ,d =0;
    char c;
    for(int i = 0; i<n; i++){
        cin>>c;
        if(c == 'A')
            a++;
        else if(c == 'D')
            d++;
    }

    if(a == d)
        cout<<"Friendship";
    else if(a>d)
        cout<<"Anton";
    else    
        cout<<"Danik";
        
    return 0;
}