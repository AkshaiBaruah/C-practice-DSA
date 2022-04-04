#include<bits/stdc++.h>
using namespace std;

class ProducerConsumer{
    public :
    int sz;
    int cap;
    int* buffer;
    ProducerConsumer(int cap){
        this->cap = cap;
        sz = 0;
        buffer = new int[cap];
    }
    void produce(int x){
        if(sz == cap){
            ;
        }
        buffer[sz++] = x;
        cout<<x<<" is added to buffer";
    }
    void consumer(){
        if(sz == 0){
            ;
        }
        else{
            sz --;
        }
    }
};
int main(){
    int size = 5;
    ProducerConsumer pc1(size);
    pc1.produce(5);

    return 0;
}