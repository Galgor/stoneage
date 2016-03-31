/*
 * Building.h
 *
 *  Created on: Mar 30, 2016
 *      Author: claudio
 */

#ifndef BUILDING_H_
#define BUILDING_H_

#include "enums.h"
#include <vector>

class Building {

private:
	int m_id;

public:
	Building(): m_id {-1}{}
	Building(int id): m_id {id}	{	}
	virtual ~Building(){}
};


class Building_Fix: public Building {

private:
	std::vector<Resource_r> m_vectorResource;

public:
	Building_Fix():Building(), m_vectorResource {0}{}
	Building_Fix(int id, std::vector<Resource_r> vectorResource)
		: Building(id), m_vectorResource {vectorResource}{	}
	virtual ~Building_Fix(){}
};


class Building_OneToSeven: public Building {
public:
	Building_OneToSeven(){}
	virtual ~Building_OneToSeven(){}
};


class Building_Variable: public Building {

private:
	int m_total;
	int m_different;

public:
	Building_Variable(): Building(-1), m_total {-1}, m_different {-1}{}
	Building_Variable(int id, int total, int different)
		: Building(id), m_total {total}, m_different {different}{	}
	virtual ~Building_Variable(){}
};

#endif /* BUILDING_H_ */
