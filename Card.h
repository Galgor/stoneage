/*
 * Card.h
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#ifndef CARD_H_
#define CARD_H_

#include "enums.h"

class Card {
private:
	int m_id;

protected:
	Card_m m_multiplier;
	int m_multiplierValue;


public:
	Card(){}
	Card(int id, Card_m multiplier, int multiplierValue);
	virtual ~Card(){}

	void setID(int id){m_id=id;}
};

class Card_ItemBonus: public Card {
public:
	Card_ItemBonus(){}
	virtual ~Card_ItemBonus(){}
};

class Card_OneTimeToolBonus: public Card {

private:
	int m_value;

public:
	Card_OneTimeToolBonus(){}
	Card_OneTimeToolBonus(int id, Card_m multiplier, int multiplierValue, int value)
			: Card(id, multiplier, multiplierValue), m_value {value}
			{	}
	virtual ~Card_OneTimeToolBonus(){}
};

class Card_PermanentBonus: public Card {

private:
	Permanent_p m_permanent;

public:
	Card_PermanentBonus(){}
	Card_PermanentBonus(int id, Card_m multiplier, int multiplierValue, Permanent_p permanent)
			: Card(id, multiplier, multiplierValue), m_permanent {permanent}
			{	}
	virtual ~Card_PermanentBonus(){}
};

class Card_ResourceBonus: public Card {
private:
	Resource_r m_resource;


public:
	Card_ResourceBonus(){}
	Card_ResourceBonus(int id, Card_m multiplier, int multiplierValue, Resource_r resource);
	virtual ~Card_ResourceBonus(){}
};

class Card_ResourceBonus_Fix: public Card_ResourceBonus {

private:
	int m_amount;

public:
	Card_ResourceBonus_Fix();
	Card_ResourceBonus_Fix(int id, Card_m multiplier, int multiplierValue,
			Resource_r resource, int amount)
			: Card_ResourceBonus(id, multiplier, multiplierValue, resource), m_amount {amount}
			{	}
	virtual ~Card_ResourceBonus_Fix();
};

class Card_ResourceBonus_Roll: public Card_ResourceBonus {
public:
	Card_ResourceBonus_Roll();
	Card_ResourceBonus_Roll(int id, Card_m multiplier, int multiplierValue,
			Resource_r resource, int amount)
			: Card_ResourceBonus(id, multiplier, multiplierValue, resource)
			{	}
	virtual ~Card_ResourceBonus_Roll();
};

#endif /* CARD_H_ */
