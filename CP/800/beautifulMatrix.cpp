#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int> > m (5 , vector<int> (5 ,0)) ;
    int a , b;
    for(int i = 0; i < 5 ; i++){                   //5x5 loop
        for(int j = 0 ; j<5 ; j++){
            cin>>m[i][j];

            if(m[i][j]){
                a =i+1;
                b =j+1;
            }
        }
    }
    int res = abs(3-a) + abs(3-b);
    cout<<res;
    return 0;
}