/*
 * TextInterface.cpp
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#include "TextInterface.h"
#include "Game.h"

TextInterface::TextInterface() {
	// TODO Auto-generated constructor stub

}

TextInterface::TextInterface(Game* g) {
	pGame=g;
	g->observe(this);
	update();
}

TextInterface::~TextInterface() {
	// TODO Auto-generated destructor stub
}

void TextInterface::update(){
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "Stoneage: Game #"<< pGame->getID()<< std::endl;
	std::cout << "------------------------------------------"<< std::endl;
}

