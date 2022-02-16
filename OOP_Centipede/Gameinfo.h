/*
 * Gameinfo.h
 *
 *  Created on: May 5, 2019
 *      Author: moiz
 */

#ifndef GAMEINFO_H_
#define GAMEINFO_H_
#include"GameObject.h"
#include "MoveableObject.h"
#include"Player.h"
#include <iostream>
using namespace std;
class Player;
class MoveableObject;
class GameObject;
class Gameinfo {

public:
	Player* Myplayer;
	int board_array[60][60];
	GameObject* board_objects[60][60];
	MoveableObject* Board_Movable[60][60];
	Gameinfo();
	void Draw();
	virtual ~Gameinfo();
};

#endif /* GAMEINFO_H_ */
