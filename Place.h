/*
 * Place.h
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#ifndef PLACE_H_
#define PLACE_H_

#include "enums.h"

class Place {
public:
	Place(){}
	Place(Place_t type);
	virtual ~Place(){}

protected:
	Place_t m_type; //genaue Feldbezeichnung keine enum Class ! (fuer Performance, Places werden in einer festen Reihenfolge erzeugt - im Gegensatz zu Karten)
	int m_space; //wie viele Meeple gesetzt werden duerfen
	int m_playerId; //Id des Spielers, der setzen darf
	int m_numberOfMeeple; // Anzahl der gesetzen Meeple
	bool m_occupied;

public:
	virtual void setMeeple(int playerId, int numberOfMeeple);
	virtual int getMeeple(int playerId);
	Place_t getType(){return m_type;}
	int getSpace(){return m_space;}

};


class Place_Buy: public Place {
public:
	Place_Buy(){}
	Place_Buy(Place_t type):Place(type)	{m_space = 1;}
	virtual ~Place_Buy(){}
};


class Place_Buy_Building: public Place_Buy {
public:
	Place_Buy_Building(){}
	Place_Buy_Building(Place_t type):Place_Buy(type){}
	virtual ~Place_Buy_Building(){}
};


class Place_Buy_Card: public Place_Buy {
public:
	Place_Buy_Card(){}
	Place_Buy_Card(Place_t type):Place_Buy(type){}
	virtual ~Place_Buy_Card(){}
};


class Place_Dice: public Place {
public:
	Place_Dice(){}
	Place_Dice(Place_t type): Place(type){}
	virtual ~Place_Dice(){}
};


class Place_Dice_Huntinggrounds: public Place_Dice {
private:
	int m_secondNumberOfMeeple;

public:
	Place_Dice_Huntinggrounds(){}
	Place_Dice_Huntinggrounds(Place_t type);
	virtual ~Place_Dice_Huntinggrounds(){}

	virtual void setMeeple(int playerId, int numberOfMeeple);
	virtual int getMeeple(int playerId);
};


class Place_Dice_Resource: public Place_Dice {
public:
	Place_Dice_Resource(){}
	Place_Dice_Resource(Place_t type):Place_Dice(type){m_space = 7;}
	virtual ~Place_Dice_Resource(){}
};


class Place_Village: public Place {
public:
	Place_Village(){}
	Place_Village(Place_t type);
	virtual ~Place_Village(){}
};

#endif /* PLACE_H_ */
