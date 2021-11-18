#include<iostream>
#include<list>
using namespace std;

struct MyHash{
    int size;                                //size of the hash table;
    list<int> * table;                       //pointer that will point to the array of list in heap declared in constructor;

    MyHash(int m){
        size = m;
        table = new list<int>[size];         //declaring an array of list<int> of size passed by user and making pointer table point to it in heap;
    }

    int hashFun(int data){
        return data%size;                    //generates and returns the hash key corresponding the data;
    }
    void insert(int data){
        int i = hashFun(data);               //i is the hash key for corresponding data which is used as an index of the hash table;
        table[i].push_back(data);            //storing the data in that generated hash index;
    }
    void remove(int data){
        int i = hashFun(data);               
        table[i].remove(data);               //table[i] is a list<int> which is an stl container(DLL)
    }
    bool search(int data){
        int i = hashFun(data);
        for(auto x : table[i]){
            if(x == data)
            return true;
        }
        return false;
    }
};


int main(){
    MyHash table1(10);
    for(int i =1 ; i<20 ; i++){
        table1.insert(i);
    }
}