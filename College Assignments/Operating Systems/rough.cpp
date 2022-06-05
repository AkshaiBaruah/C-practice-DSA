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
            //cout<<buffer[in]<<" ";
            in = (in+1)%cap;
            count++;
            cout<<"Producer produced "<<x<<"\n";
            break;
        }
    }
    void consumer(){
        while(true){
            while(count == 0){
                ;
            }
            out = (out + 1)%cap;
            count --;
            break;
        }
    }

};
int main(){
    ProducerConsumer pc1 (5);
    X:
    cout<<"Enter your choice : \n1.Produce\n2.Consume\n3.Exit\n";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the item :\n";
        int i;
        cin>>i;
        pc1.producer(i);
        goto X;
    case 2:
        pc1.consumer();
        goto X;
    case 3:
        exit(0);
    default:
        break;
    }
    
    return 0;
}