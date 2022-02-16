/*
 * Position.cpp
 *
 *  Created on: May 3, 2019
 *      Author: moiz
 */

#include "Position.h"

Position::Position(const int& x,const int& y) {
	X=x;	Y=y;
}

int Position::getX() const {
	return X;
}

void Position::setX(int x) {
	X = x;
}

int Position::getY() const {
	return Y;
}

void Position::setY(int y) {
	Y = y;
}

Position::~Position() {
	// TODO Auto-generated destructor stub
}

