#include "Player.h"

int Player::num_players{0};

Player::Player(std::string name_val,int health_val,int exp_val):name{name_val},health{health_val},exp{exp_val}{
    num_players++;
}

Player::Player(const Player &source)
:Player{source.name,source.health,source.exp}{

};
Player::~Player(){
    num_players--;
}
int Player::get_num_players(){
    return num_players;
}
    