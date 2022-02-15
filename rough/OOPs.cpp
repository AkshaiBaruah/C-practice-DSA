#include<bits/stdc++.h>
using namespace std;

class Player{
    private : 
    string name;
    int health;
    int xp;

    static int plr_cnt ;                       //static member variale; belongs to the class and not a specific object

    public: 

    Player(string name_val = "None" , int health_val =0 , int xp_val = 0)           //constructor 
        : name {name_val} , health {health_val} , xp{xp_val} {
            plr_cnt++;
        }
    
    Player(const Player &source)                //shallow copying constructor(same as default)
        : name {source.name} , health { source.health} , xp{source.xp} {
            plr_cnt++;
        }                                     

    
    void display () const {                      //writing const like that is vow that method wont change attributes
        cout<<"the player is "<<name<<" , health = "<<health<<" and xp = "<<xp<<endl;
    } 
    bool isTheName(string name ) const{
        return (this->name == name)? true : false;
    }
    string get_name() const {
        return this->name;

    }
    void set_name(string name){
        this->name = name; 
    }

    static void display_playerCount(){             //static member function which has access to only static members and can be called without a specific object
        //cout<<"the number of players alive is "<<plr_cnt<<endl;
    }

    ~Player(){ 
        plr_cnt--;
    }
    

};
int Player::plr_cnt = 0;                 //static member variable initialization 




int main(){


    const Player p1 {"akshai" , 100, 13};
    Player p2 = p1;   //same as const Player p2{p2}....copy constructor is called when we have to create an object based on an existing object hence copy
    p2.set_name("ankur");
    p1.display();
    p2.display();
    if(p1.isTheName("akshai"))
    cout<<"so p1 was akshai after all"<<endl;
    else cout<<"oops p1 is not akshai but "<<p1.get_name()<<endl;
    if(p2.isTheName("hebla"))
    cout<<"so p2 was ankur after all"<<endl;
    else cout << "oops p2 is not hebla but "<<p2.get_name()<<endl;
    Player p3 {"alakesh" , 70 , 40};
    Player::display_playerCount();
    

    return 0;

}