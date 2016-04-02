/*
 * Game.cpp
 *
 *  Created on: Mar 29, 2016
 *      Author: claudio
 */

#include "Game.h"

#include "enums.h"
#include "Interface.h"
#include "Place.h"

//Constructors

Game::Game() {
	m_id=-1;
	createPlaces();
}

Game::Game(int id){
	m_id=id;
	createPlaces();
}

//TODO Deconstructor
Game::~Game() {
	for(int i=0;i<14;i++){
		delete m_pPlaces[i];
	}
}

//Functions

void Game::update(){
	//Tell all registered Interfaces to update themselves
	for(unsigned int i=0;i<m_pObservers.size();i++){
		m_pObservers[i]->update();
	}
}

void Game::evaluate(Move* move){
	m_pHistory.push_back(move);//add move to history
	//TODO: evaluate move
	update();
}

void Game::saveGame(std::string filename){
	//TODO: save Setup and History to filename
}

void Game::loadGame(std::string filename){
	//TODO: load Game from filename
}

void Game::createPlaces(){
	m_pPlaces[FARM]				= new Place_Village(FARM);
	m_pPlaces[HUT]				= new Place_Village(HUT);
	m_pPlaces[TOOLMAKER]		= new Place_Village(TOOLMAKER);
	m_pPlaces[HUNTINGGROUNDS] 	= new Place_Dice_Huntinggrounds(HUNTINGGROUNDS);
	m_pPlaces[FOREST]			= new Place_Dice_Resource(FOREST);
	m_pPlaces[CLAYPIT]			= new Place_Dice_Resource(CLAYPIT);
	m_pPlaces[QUARRY]			= new Place_Dice_Resource(QUARRY);
	m_pPlaces[RIVER]			= new Place_Dice_Resource(RIVER);
	m_pPlaces[FIRSTCARD]		= new Place_Buy_Card(FIRSTCARD);
	m_pPlaces[SECONDCARD]		= new Place_Buy_Card(SECONDCARD);
	m_pPlaces[THIRDCARD]		= new Place_Buy_Card(THIRDCARD);
	m_pPlaces[FOURTHCARD]		= new Place_Buy_Card(FOURTHCARD);
	m_pPlaces[LEFTBUILDING]		= new Place_Buy_Building(LEFTBUILDING);
	m_pPlaces[RIGHTBUILDING]	= new Place_Buy_Building(RIGHTBUILDING);
}

bool Game::isFinished() {
	return true;
}

bool Game::isAllowed(Move* move) {
	return true;
}

std::vector<Move*> Game::getLegalMoves() {
	std::vector<Move*> legalMoves;
	//TODO: get all legal Moves
	return legalMoves;
}

void Game::changeActivePlayer() {
	if (m_activePlayer==0){
		m_activePlayer=1;
	}else{
		m_activePlayer=0;
	}
}

Player* Game::getActivePlayer() {
	return m_pPlayers[m_activePlayer];
}
