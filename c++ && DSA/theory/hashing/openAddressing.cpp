#include<iostream>
using namespace std;

struct Myhash{
    int cap,size;
    int * arr;

    int h1(int key){
        return key%cap;
    }
    int h2(int key){
        return ((cap-1) -key%(cap -1));
    }

    Myhash(int c){
        cap = c;
        arr = new int[cap];
        for(int i =0 ; i< cap ; i++){
            arr[i] = -1;
        }
    }

    void insert(int data){
        int n =0;
       while(1){
            int i = (h1(data) + n*h2(data))%cap;
            if(arr[i] == -1)
            {
                arr[i] = data;
                return;
            }
            n++;
        }
    }
    void remove(int data){
        int n =0;
        int i = (h1(data) + n*h2(data))%cap;
        while(arr[i] != -1){
            if(arr[i] == data){
                arr[i] = -2;
                return;
            }
            n++;
            i = (h1(data) + n*h2(data))%cap;
        }
    }
    bool search(int data){
        int n =0;
        int h = (h1(data) + n*h2(data))%cap;
        int i =h;
        while(arr[i] != -1){
            if(arr[i] == data)
            return true;
            n++;
            i = (h1(data) + n*h2(data))%cap;

            if(i==h)
            return false;
            
        }
        return false;
    }

};

int main(){

    Myhash table1(7);
    table1.insert(49);
    table1.insert(56);
    table1.insert(72);
    cout<<boolalpha;
    cout<<table1.search(56);
    table1.remove(72);
    cout<<table1.search(56);
    table1.remove(56);
    cout<<table1.search(56);

    return 0;
}