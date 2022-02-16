/*
 * Player.cpp
 *
 *  Created on: May 5, 2019
 *      Author: moiz
 */

#include "Player.h"
enum BoardParts {
	NILL, MUSHROOM
};
Player::Player(Gameinfo& b):MoveableObject(30,1) {
	lives=3;	// TODO Auto-generated constructor stub
	direction=0;
	b.board_array[0][30]=3;
	b.board_objects[0][30]=this;
	b.board_objects[0][32]=this;
	b.board_array[0][32]=3;
cout<<"MMM";
	this->b=&b;
}
void Player::move(){
	b->board_array[position.getY()-1][position.getX()-1]=0;
	b->board_objects[position.getY()-1][position.getX()-1]=NULL;
	b->board_array[position.getY()-1][position.getX()+1]=0;
	b->board_objects[position.getY()-1][position.getX()+1]=NULL;
cout<<"Moving";
	switch (direction){
	case 1:{
		if (position.getX()-1>0){
			position.setX(position.getX()-1);
		}
		break;
	}
	case 2:{
		if (position.getX()+2<60){
			position.setX(position.getX()+1);
		}
		break;
	}
	case 3:{
		if (position.getY()-1>0){
			position.setY(position.getY()-1);
		}
		break;
	}
	case 4:{
		if (position.getY()+1<15){
			position.setY(position.getY()+1);
		}
		break;
	}
	default:{

	}
	}
	cout<<"Moved";
	b->board_array[position.getY()-1][position.getX()-1]=1;
	b->board_objects[position.getY()-1][position.getX()-1]=this;
	b->board_array[position.getY()-1][position.getX()+1]=1;
	b->board_objects[position.getY()-1][position.getX()+1]=this;

	direction=0;
}
void Player::draw(){
	DrawRectangle(position.getX()*10,position.getY()*10,5,10,colors[GOLD]);
	DrawRectangle((position.getX()+1)*10,position.getY()*10,5,10,colors[GOLD]);

}
void Player::collision(){

}

int Player::getDirection() const {
	return direction;
}

void Player::setDirection(int direction) {
	this->direction = direction;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

