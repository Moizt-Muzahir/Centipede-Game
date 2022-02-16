/*
 * MoveableObject.h
 *
 *  Created on: May 4, 2019
 *      Author: moiz
 */

#ifndef MOVEABLEOBJECT_H_
#define MOVEABLEOBJECT_H_
#include"GameObject.h"
//#include"Gameinfo.h"
class MoveableObject:public GameObject {
protected:
public:
	MoveableObject();
	MoveableObject(const int& x,const int& y);
	virtual void move()=0;
	virtual void collision()=0;
	virtual ~MoveableObject();
};

#endif /* MOVEABLEOBJECT_H_ */
