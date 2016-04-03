/*
 * Engine.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: claudio
 */

//testKommentar

#include "Engine.h"
#include "Move.h"
#include "Interface.h"
#include "Game.h"
#include "Player.h"

Engine::Engine() {
	// TODO Auto-generated constructor stub

}

Engine::~Engine() {
	// TODO Auto-generated destructor stub
}

Move* Engine::getMove() {
	return m_pGame->getActivePlayer()->getMove(m_pInterface,m_pGame);
}

void Engine::run() {
	while(! m_pGame->isFinished()){
		Move* pMove = getMove();
		if(m_pGame->isAllowed(pMove)){
			m_pGame->evaluate(pMove);
		}
	}
}
