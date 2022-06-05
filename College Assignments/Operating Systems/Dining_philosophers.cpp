#include <bits/stdc++.h>
using namespace std;
vector<int> fork(6,0);
void wait(int);
void signal(int);
void phil(int i){
    int n = 5;
    if(i==1)                   //this is the modification which removes deadlock
        {   
            //entry section
            fork[1]=1;
            fork[5]=1;
            //cs
            printf(" philoshiphers 1 is eating with fork 1 and %d while others philoshiphers are thinking \n",n);
            //exit section
            fork[1]=0;
            fork[n]=0;
            
        }      
        else{   
            //entry
            fork[i-1]=1;
            fork[i]=1;
            //critical section
            printf(" philoshiphers %d is eating with fork %d and %d while others philoshiphers are thinking\n", i,i-1,i);
            //exit section
            fork[i]=0;
            fork[i-1]=0;      
        }
}
int main()
{
    int n = 5;
    //printf("enter the number of philoshiphers\n");
    //cin>>n;
    int i;
    
    for(i=1;i<=n;i++)
    {
        if(i==1)                   //this is the modification which removes deadlock
        {   
            //entry section
            fork[1]=1;
            fork[n]=1;
            //cs
            printf(" philoshiphers 1 is eating with fork 1 and %d while others philoshiphers are thinking \n",n);
            //exit section
            fork[1]=0;
            fork[n]=0;
            
        }      
        else{   
            //entry
            fork[i-1]=1;
            fork[i]=1;
            //critical section
            printf(" philoshiphers %d is eating with fork %d and %d while others philoshiphers are thinking\n", i,i-1,i);
            //exit section
            fork[i]=0;
            fork[i-1]=0;      
        }    
    }
    X:
    cout<<"Enter the philosopher : \n";
    int p;
    cin>>p;
    phil(p);
    return 0;
}
void wait(int i ){
    if(fork[i] == 1){
        cout<<"Blocked";
    }
    else{
        fork[i] = 1;
    }
}
void signal(int i ){
    fork[i] = 0;
}
