/*
 * Engine.h
 *
 *  Created on: Apr 2, 2016
 *      Author: claudio
 */

#ifndef ENGINE_H_
#define ENGINE_H_

class Interface;
class Move;
class Game;

class Engine {

private:
	Interface* m_pInterface;
	Game* m_pGame;

public:
	Engine();
	virtual ~Engine();

	Move* getMove();
	void run();
};

#endif /* ENGINE_H_ */
