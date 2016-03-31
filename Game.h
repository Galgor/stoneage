/*
 * Game.h
 *
 *  Created on: Mar 29, 2016
 *      Author: claudio
 */

#include <vector>
#include <string>
#include <array>


#ifndef GAME_H_
#define GAME_H_

class Interface;
class Move;
class Place;

class Game {

private:
	int m_id;//Game ID
	std::vector<Interface*> m_Observers;//All Interfaces watching the game
	std::vector<Move*> m_History;//All Interfaces watching the game
	std::array<Place*,14> m_pPlaces;


public:
	Game();
	Game(int id);
	void createPlaces();
	virtual ~Game();
	//Functions
	int getID(){return m_id;}//Return GameID
	void observe(Interface* pI){m_Observers.push_back(pI);}//register Interface
	void update();//Tell all registered Interfaces to update themselves
	void evaluate(Move* m);//takes a Move and changes the Game accordingly, adds m to History
	void saveGame(std::string filename);//save Game
	void loadGame(std::string filename);//load Game

};

#endif /* GAME_H_ */
