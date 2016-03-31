/*
 * Interface.cpp
 *
 *  Created on: Mar 29, 2016
 *      Author: claudio
 */

#include "Interface.h"
#include "Game.h"

//Constructors
Interface::Interface() {
	pGame=0;
}

Interface::Interface(Game* g) {
	pGame=g;
	g->observe(this);
}

//TODO: Deconstructor.
Interface::~Interface() {

}


//Functions

void Interface::update(){
	//update the interface. Only virtual. Different implementation depending on the Interface.
}
