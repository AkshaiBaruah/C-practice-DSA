#include<bits/stdc++.h>
using namespace std;
class ProducerConsumer{
    public: 
    int cap ;
    int* buffer;
    int in ;
    int out;
    int count ;
    ProducerConsumer(int cap){
        this->cap = cap;
        count = in = out = 0;
        buffer = new int[cap];
    }
    void producer(int x){
        while(true){
            while(count == cap){
                ;
            }
            buffer[in] = x;
            cout<<buffer[in]<<" ";
            in = (in+1)%cap;
            count++;
        }
    }
    void consumer(){
        while(true){
            while(count == 0){
                ;
            }
            out = (out + 1)%cap;
            count --;
        }
    }

};
int main(){
    ProducerConsumer pc1 (5);
    for(int i = 1 ; i<=7 ; i++){
        pc1.producer(i);
    }
    pc1.consumer();
    
    return 0;
}