#include <iostream>
#include <array>
#include "Game.h"
#include "Player.h"
#include "Card.h"
#include "Place.h"
#include "TextInterface.h"


int main(){
	Game* g= new Game(1);
	TextInterface* t=new TextInterface(g);
	int i=2;
	return 0;
}
