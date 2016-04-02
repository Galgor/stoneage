/*
 * enums.h
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#ifndef ENUMS_
#define ENUMS_


enum Place_t{
	FARM, HUT, TOOLMAKER, HUNTINGGROUNDS, FOREST, CLAYPIT, QUARRY, RIVER, FIRSTCARD, SECONDCARD, THIRDCARD, FOURTHCARD, LEFTBUILDING, RIGHTBUILDING
};

enum Resource_r{
	FOOD, WOOD, CLAY, STONE, GOLD
};

enum class Card_m{
	FIELD, MEEPLE, TOOL, BUILDING, GREEN
};

enum class Permanent_p{
	FIELD, TOOL, MEEPLE
};

enum class Player_t{
	HUMAN, AI
};

enum class Game_t{
	HUMANVSHUMAN, HUMANVSAI
};

#endif /* ENUMS_ */
