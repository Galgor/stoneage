/*
 * Interface.h
 *
 *  Created on: Mar 29, 2016
 *      Author: claudio
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_

class Game;

class Interface {
protected:
	Game* pGame;

public:
	Interface();
	Interface(Game* g);
	virtual ~Interface();

	//Functions
	virtual void update();//Update the interface
};

#endif /* INTERFACE_H_ */
