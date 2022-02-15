#include<bits/stdc++.h>
using namespace std;

template< class T>
void print (const map< T , int > &marks  ){
    cout<<"size : "<<marks.size()<<endl<<"=================="<<endl;
    for(auto pr : marks){                                                     //loop of nlog(n)
        cout<<pr.first<<" : "<<pr.second<<endl;      //O(log(n)) for accessing
    }
}

int main(){ 
    map<int , int> marks ;                //roll number and marks 
    marks[1] = 90;                        //[] this operator has O(log(n)) time.
    marks[2] = 87;                        //O(log(n))
    marks.insert({3 , 78});               //O(log(n))  this is also the standard insert function for maps;
    marks[4] ;                            //O(log(n)) and by default 0 is inserted for key 4
    marks[5] = 86;
    marks[6] = 89; 
    print(marks);
    marks.erase(4);                       //log(n)
    marks[2] = 89;                        //if key already exists like 2 does then value will be updated in map: time taken O(log(n))
    print(marks);
    auto it = marks.find(2);              //returns an iterator in O(log(n))

    cout<<"===========================================================\n";
    for(it ; it!= marks.end() ; ++it){      //print from that specific key whose iterator is given by find() function
        cout<<it->first<<" : "<<it->second<<endl;
    }

    auto it2 = marks.find(10);            //if key not present returns end iterator (marks.end())
    
    marks.erase(100);                     //if element is not present then it does nothing or result in error

    cout<<"===========================================================\n";
    for(it = marks.find(2) ; it!= it2 ; ++it){      //print from that specific key whose iterator is given by find() function
        cout<<it->first<<" : "<<it->second<<endl;
    } 
    marks.clear();
    print(marks);

    map<string , int> ages;
    ages["akshai"] = 18;
    ages.insert({"ankur" , 19});           //inserting takes strlen*log(n) time because strings have to be compared so that unique string is only inserted
    print(ages);
    
    return 0;
}