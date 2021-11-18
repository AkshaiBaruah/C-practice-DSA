#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isMatching(char a , char b ){
    return(   ( a =='(' &&  b ==')')  ||
              ( a =='[' &&  b ==']')  ||  
              ( a =='{' &&  b =='}')    );
}

bool isParenBalanced(string &s){

    if(s.length()%2 != 0)            //if len is odd then no way for it to be balanced;
    return false;

    stack<char> opens;               //stack to insert the opening brackets;

    for(int i =0 ; i<s.length() ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] =='{'){
            opens.push(s[i]);
        }
        else{
            if(!opens.empty()){             //if we encounter a closing bracket then we proceed only if stack of opens is not empty;

               if(!isMatching(opens.top() , s[i]))     //if matching pair is not found then not balanced so return false
               return false;
               else
               opens.pop();                            //if matching pair found then top of stack is popped because evaluation of that pair is done;
            }
            else
            return false;
        }
    }
    return (opens.empty());          //if empty it means for every closing brackets corresponding opening bracks were popped;
    
    
}

int main(){

    string s ="}}}}}";
    cout<<boolalpha;
    cout<<isParenBalanced(s);
    return 0;
}