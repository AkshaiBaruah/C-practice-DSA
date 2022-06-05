#include <bits/stdc++.h>
using namespace std;
int X = 100;
int readCount=0;
bool mutex=true;
bool db=true;
void up(bool b)
{
    b=!b;
}
void down(bool b)
{
    b=!b;
}
void reader()
{
    while(true)
    {
        down(mutex);
        readCount++;
        if(readCount==1){
            down(db);
        }
        up(mutex);
        //exit
        down(mutex);
        readCount--;
        if(readCount==0)
            up(db);
        up(mutex);

        // processData
        cout<<X<<endl;
    }
}

void writer()
{
    while(true)
    {
        down(db);
        X++;
        up(db);
    }
}


int main()
{

    X:
    cout<<"Please enter your choice : \n1.Read\n2.Write\n3.Exit\n";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        reader();
        goto X;
    case 2:
        writer();
        goto X;
    case 3:
        exit(0);
    default:
        break;
    }   
    return 0;
}