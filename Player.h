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
	std::array<int,5> m_resources;
	std::array<int,3> m_tools;
	int m_meeple;
	int m_meepleHome;
	int m_fields;
	int m_points;
	bool m_bonusResources;


protected:
	Player_t m_type;

public:
	Player();
	virtual ~Player();

	virtual Move* getMove(Interface* pInterface, Game* pGame);
	void addPermanent(Permanent_p bonus);
	void feet();

};

#endif /* PLAYER_H_ */
