/*
 * Mushroom.h
 *
 *  Created on: May 4, 2019
 *      Author: moiz
 */

#ifndef MUSHROOM_H_
#define MUSHROOM_H_
#include"GameObject.h"
#include"Board.h"
#include"Gameinfo.h"
class Mushroom :public GameObject{
	int Hp;
	bool Mushroomset;
	Gameinfo* b;
public:
	virtual void draw();
	bool setMushroom();
	void collision();
	Mushroom(const int& x,const int &y,Gameinfo& bb);
	virtual ~Mushroom();
};

#endif /* MUSHROOM_H_ */
