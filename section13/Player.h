#ifndef _PLAYER_H_
#define _PLAYER_H_   
#include<string>
    
class Player{
    private:
    
    static int num_players;
    std::string name;
    int health;
    int exp;
   public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_exp(){return exp;}
    Player(std::string name="Player",int health=100,int exp=0){

    }
    Player(const Player &source);
    ~Player();

    static int get_num_players();
    
};

#endif