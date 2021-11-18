#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<string , int > person;
    person = {"akshai" , 20 };
    cout<<"person's name is " <<person.first<<" and he is "<<person.second<<" years old !!"<<endl;

    vector<string> names;
    names = {"akshai" , "ankur" , "alakesh" };
    names.push_back("subhu");
    for( const auto &x : names){           //x that iterates through the array and const because its just for displaying and not changing 
        cout<<x;                           //if x was not made reference then a copy of vector names would have been made which is O(n)
        cout<<endl;
    }
    names.pop_back();
    names.push_back("jayanta");
    cout<<"============================"<<endl;;
    for(int i =0 ; i < names.size() ; i++){       //normal loop
        cout<<names.at(i)<<endl;
    }

    vector<int> ages(4,-1) ; 
    for(const auto &x : ages){            //reference used to avoid copying of entire vector and const used to prevent changes made to x and hence to ages
        cout << x<<endl;
    }

    ages = { 20 , 19 , 21 , 18};
    for(const auto &x : ages){
        cout << x<<endl;
    }

    vector<pair<string , int >> myGroup(4);
    myGroup = {{"akshai" , 20} , {"ankur" , 19 } , {"alakesh" , 21} , {"jayanta" , 18}};

    for(const auto &x : myGroup){
        cout<<x.first<<" is "<<x.second<<" years old"<<endl;
    }
    
    return 0;
}