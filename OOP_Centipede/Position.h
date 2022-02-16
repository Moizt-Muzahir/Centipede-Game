/*
 * Position.h
 *
 *  Created on: May 3, 2019
 *      Author: moiz
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position {
	int X,Y;
public:
	Position(const int& x=0,const int& y=0);
	virtual ~Position();
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);

};

#endif /* POSITION_H_ */
