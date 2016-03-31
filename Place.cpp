/*
 * Place.cpp
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#include "Place.h"

///////////////////////////////////////////
// Place
///////////////////////////////////////////


Place::Place(Place_t type) {
	m_type=type;
	m_occupied=false;
}

void Place::setMeeple(int playerId, int numberOfMeeple){
		m_playerId = playerId;
		m_numberOfMeeple = numberOfMeeple;
		m_occupied = true;
}

int Place::getMeeple(int playerId){
		m_occupied = false;
		return m_numberOfMeeple;
}


///////////////////////////////////////////
// Place_Dice_Huntinggrounds
///////////////////////////////////////////


Place_Dice_Huntinggrounds::Place_Dice_Huntinggrounds(Place_t type):Place_Dice (type)  {
	// TODO Auto-generated constructor stub
	m_space=40;
	m_playerId=-1;
	m_numberOfMeeple=0;
	m_secondNumberOfMeeple=0;
}


void Place_Dice_Huntinggrounds::setMeeple(int playerId, int numberOfMeeple){
	if ((m_playerId == -1) || (m_playerId == playerId)){
		m_playerId = playerId;
		m_numberOfMeeple += numberOfMeeple;
	}else{
		m_secondNumberOfMeeple += numberOfMeeple;
	}
}

int Place_Dice_Huntinggrounds::getMeeple(int playerId){
	if (m_playerId == playerId){
		int numberOfMeeple {m_numberOfMeeple};
		m_numberOfMeeple = 0;
		m_playerId = -1;
		return numberOfMeeple;
	}else{
		int numberOfMeeple {m_secondNumberOfMeeple};
		m_secondNumberOfMeeple = 0;
		return numberOfMeeple;
	}
}



///////////////////////////////////////////
// Place_Village
///////////////////////////////////////////


Place_Village::Place_Village(Place_t type): Place(type){
	if (type == HUT){
		m_space = 2;
	}
	else {
		m_space = 1;
	}
}
