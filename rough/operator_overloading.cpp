#include<iostream>
#include<cstring>

using namespace std;

class String{

    char * str = nullptr;
    public: 
    String(){                                //No args constructor
        str = new char[1];
        *str = '\0';
    }

    String(const char *s){                   //constructor for string arguement 
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        }
        else {
            str = new char[strlen(s) + 1 ];
            strcpy(str , s);
        }
    }

    String(const String &source){           //copy constructors
        if (source.str == nullptr){
            this->str = '\0';
        }
        else {
            str = new char[strlen(source.str) + 1];
            strcpy(str , source.str);
        }
    }
 
    void display() const {                   
        cout<<str<<" : "<<endl;
    } 

    int get_length(){
        return strlen(str);
    }

    ~String(){                              //destructors
        delete[] str;
    }
};

int main(){
    char * str = new char[10];
    strcpy(str , "akshai");
    cout<<str;
    return 0;
}