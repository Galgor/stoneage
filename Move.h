/*
 * Move.h
 *
 *  Created on: Mar 29, 2016
 *      Author: claudio
 */

#ifndef MOVE_H_
#define MOVE_H_

class Move {

private:
	static int idCounter;
	const int m_id=assignId();
	static int assignId(){return idCounter++;}

public:
	Move();
	virtual ~Move();
	int getID(){return m_id;}
	int getIDCounter(){return idCounter;}
};



#endif /* MOVE_H_ */
