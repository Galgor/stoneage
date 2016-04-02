/*
 * Player.h
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "enums.h"
#include <string>

class Move;
class Interface;

class Player {

private:
	int m_id;
	std::string m_name;

protected:
	Player_t m_type;

public:
	Player();
	Player(int id, std::string name)
			: m_id {id}, m_name {name}
			{	}
	virtual ~Player();

	virtual Move* getMove(Interface* pInterface, Game* pGame);

};

#endif /* PLAYER_H_ */
