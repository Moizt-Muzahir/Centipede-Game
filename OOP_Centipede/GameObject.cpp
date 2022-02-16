/*
 * GameObject.cpp
 *
 *  Created on: May 4, 2019
 *      Author: moiz
 */

#include "GameObject.h"
GameObject::GameObject(){

}
GameObject::GameObject(const int& x,const int& y){
	position.setX(x);
	position.setY(y);
}

void GameObject::setPosition(const Position& position) {
	this->position = position;
}
void GameObject::setPosition(const int& x,const int& y) {
				position.setX(x);	position.setY(y);
		}

const Position& GameObject::getPosition() const {
	return position;
}

GameObject::~GameObject() {
	// TODO Auto-generated destructor stub
}

