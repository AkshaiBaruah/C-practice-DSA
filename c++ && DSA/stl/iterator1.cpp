#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ages = {12,13,14,14,15,18,20};
    vector<int> ::iterator it;
    for(it = ages.begin() ; it!= ages.end() ; ++it){              //end iteerator is the iterator after the last element basically it points to an invalid value;
        cout<<"the age is "<<*it<<endl;
    }
    vector<pair<string , int>> people(5);
    people = {{"akshai" , 170} , {"ankur", 173} , {"subhu" , 167}};
    vector<pair<string , int >> ::iterator it2;
    for(it2 = people.begin() ; it2 != people.end() ; ++it2){
        cout<<it2->first<<" is "<<it2->second<<"cms in height"<<endl;
    }

    vector<pair<int , int>> haldi = {{250,20}, {500,35} , {1000,60}};                //haldi gram and prices
    for(const auto &x : haldi){
        cout<<x.first<<"g haldi is "<<x.second<<" rupees"<<endl;
    }
    return 0;
}