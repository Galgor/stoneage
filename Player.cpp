/*
 * Player.cpp
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#include "Player.h"
#include "Game.h"
#include "Interface.h"

Player::Player() {
	// TODO Auto-generated constructor stub
	m_id=-1;
	m_resources[FOOD]=12;
	m_name="dummy";
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

Move* Player::getMove(Interface* pInterface, Game* pGame) {
	return new Move();
}
