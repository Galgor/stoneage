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
#include <array>

class Move;
class Interface;
class Game;

class Player {

private:
	int m_id;
	std::string m_name;
	std::array<int,5> m_resources;
	std::array<int,3> m_tools;
	int m_meeple=5;
	int m_meepleHome=5;
	int m_fields=0;
	int m_points=0;
	bool m_bonusResources=false;


protected:
	Player_t m_type;

public:
	Player();
	virtual ~Player();

	virtual Move* getMove(Interface* pInterface, Game* pGame);
	void addPermanent(Permanent_p bonus);
	void addField(){m_fields++;}
	void addMeeple(){m_meeple++;}
	void addTool();
	void feet();

};

#endif /* PLAYER_H_ */
