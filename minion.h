#ifndef _MINION_H_
#define _MINION_H_

#include "card.h"

class Minion: public Card {
    
    int attack;
    int defense;
    int maxActions;
    int currActions = 0;

public:

    Minion(std::string name, std::shared_ptr<Player> owner, int manaCost, int attack, int defence, int maxActions = 1, string description = "");

    void addAction(int i);
    void lowerAction(int i);
    void setAction(int i);
    int getAction();
    
    void addStats(int attack, int defence);
    
    void setAttack(int i);
    void setDefense(int i);
    
    void setStats(int attack, int defence);
  
    int getAttack();
    int getDefense();
    
    virtual void runEffect(State s) = 0;
    
    virtual void ~Minion() = 0;
};

#endif
