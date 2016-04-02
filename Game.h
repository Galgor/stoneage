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
class Player;
class Card;

class Game {

private:
	int m_id;//Game ID
	std::vector<Interface*> m_pObservers;//All Interfaces watching the game
	std::vector<Move*> m_pHistory;//All Interfaces watching the game
	std::array<Place*,14> m_pPlaces;
	std::array<Player*,2> m_pPlayers;
	std::array<Card*,36> m_pCardss;
	int m_activePlayer;

public:
	Game();
	Game(int id);
	void createPlaces();
	virtual ~Game();
	//Functions
	int getID(){return m_id;}//Return GameID
	void observe(Interface* pI){m_pObservers.push_back(pI);}//register Interface
	void update();//Tell all registered Interfaces to update themselves
	void evaluate(Move* move);//takes a Move and changes the Game accordingly, adds m to History
	void saveGame(std::string filename);//save Game
	void loadGame(std::string filename);//load Game
	bool isFinished();
	bool isAllowed(Move* move);
	std::vector<Move*> getLegalMoves();
	void changeActivePlayer();
	Player* getActivePlayer();
};

#endif /* GAME_H_ */
