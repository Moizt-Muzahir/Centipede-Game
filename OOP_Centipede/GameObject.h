/*
 * GameObject.h
 *
 *  Created on: May 4, 2019
 *      Author: moiz
 */

#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include"Position.h"
//#include"Gameinfo.h"
class GameObject {
protected:
	Position position;
public:
	GameObject();
	GameObject(const int& x,const int& y);
	virtual void draw()=0;
	virtual ~GameObject();


	void setPosition(const int& x,const int& y);

	const Position& getPosition() const;
	void setPosition(const Position& position);
};

#endif /* GAMEOBJECT_H_ */
