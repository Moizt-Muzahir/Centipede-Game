/*
 * Player.h
 *
 *  Created on: May 5, 2019
 *      Author: moiz
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include"MoveableObject.h"
#include"Board.h"
#include"Gameinfo.h"
class Gameinfo;
class MoveableObject;
class Player :public MoveableObject {
	int direction;
	int lives;
	Gameinfo* b;
public:
	Player(Gameinfo&);
	void move();
	void collision();
	void draw();
	virtual ~Player();
	int getDirection() const;
	void setDirection(int direction);
};

#endif /* PLAYER_H_ */
