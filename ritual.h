#ifndef _RITUAL_H_
#define _RITUAL_H_

#include "card.h"


class Ritual: public Card {
    int charges;
    int activationCost;
    
    public:
    Ritual(std::string name, int manaCost, int charges, int activationCost, std::string description = "");
    
    void runEffect(Subject &board);
    
    void playCard(Board &b, int target) override;

    card_template_t displayCard() override;
    void addCharges(int i);
    void addActivateCost(int i);
};

#endif
