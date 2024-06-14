// make a bgmi game using c++ oops concept having 2 players 
#include<iostream>
using namespace std;
class Guns{
    int gunName;
    int damage;
    int bullets;
    public:
    void getGunname();
    void outputGun2();
};
class pubg {
    string playerName;
    static int health;
    int chracter;
    Guns gun;
    public:
    void getName();
    void putName();
    void getHealth();
    void putHealth();
    class Akm{
        int damage;
        int bullets;
        public:
        void getAkm();
        void outputAkm();
    };
};
void getAkm(int akms){
    // this->getAkm = akms;
}
void pubg::Akm::outputAkm(){
    cout<<damage;
}
void pubg::getHealth(){
    cout<<"Enter the health of the player: ";
    cin>>health;
    cout<<endl;
}
void pubg::putHealth(){
    cout<<"Health of the player is: "<<health;
    cout<<endl;
}
void pubg::getName(){
    cout<<"Enter the player name: ";
    cin>>playerName;
    cout<<endl;
}
void pubg::putName(){
    cout<<"Player name is: "<<playerName;
    cout<<endl;
}
void Guns::getGunname(){
    cout<<"Enter the gun name: ";
    cin>>gunName;
    cout<<endl;
}

int main(){
    pubg Player1;
    pubg Player2;
    Player1.getName();
    Player1.putName();
    Player1.getHealth();
    Player1.putHealth();
    // Player1.gun.getGunname();

}