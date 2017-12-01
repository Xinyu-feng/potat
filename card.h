#ifndef _CARD_H_
#define _CARD_H_
#include "observer.h"
#include <string>
#include <memory>

class Board;
class Subject;




class Card: public Observer{
	std::string name;
	int manaCost;
	std::string description;
	std::shared_ptr<Player> owner;
	
public:
    Card(std::string name, std::shared_ptr<Player> owner, int manaCost, string description = "");

	void notify(Subject &whoFrom);
	
	int getManaCost();
	
	std::string getName();

	virtual void runEffect(Subject board);
	virtual void displayCard() = 0;
	
	virtual void playCard(Board &b, int target = -1) = 0;
	
	virtual ~Card() = 0;
};
#endif

