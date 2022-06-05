#include<iostream>
using namespace std;

int main(){
    int write=0,read=0;
    char pro;
 
cout<<"Enter r for reading, w for writing and e for exit\n\n";
while(1){
    cout<<"Enter the process you want to do\n";
    cin>>pro;

    if(pro=='e')
    break;
    else if(read < 4 && pro=='r'){
        cout<<"reading\n";
       read++;
    }
    else if(read > 4 && pro=='r'){
        cout<<"wait\n";
        
    }
    else if(pro=='w'&& read==0){
        cout<<"writing\n";
        
    }
    else {
    cout<<"wait\n";
    read--;  }

}
}