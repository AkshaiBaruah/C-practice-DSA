#include<bits/stdc++.h>
using namespace std;

void print(const map<int , int> &marks){
    for( auto pr : marks){
        cout<<"marks of roll no "<<pr.first<< " is "<<pr.second<<endl;
    }
}

int main(){
    map<int , int> marks = {{1,90} , { 2, 89} , {3,78} ,{4,78}, {5,69}, {6,22}};
    auto it = marks.find(100);              //key not present - returns end() iterator
    
    for(auto it2 = marks.find(3) ; it2 !=it ; ++it2){
        cout<<"marks of roll no "<<it2->first<< " is "<<it2->second<<endl;
    }
    return 0;
}