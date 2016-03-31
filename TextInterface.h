/*
 * TextInterface.h
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#ifndef TEXTINTERFACE_H_
#define TEXTINTERFACE_H_

#include <iostream>
#include "Interface.h"

class Game;

class TextInterface: public Interface {
public:
	TextInterface();
	TextInterface(Game* g);
	virtual ~TextInterface();

	//Functions
	virtual void update();//Update the interface
};

#endif /* TEXTINTERFACE_H_ */
