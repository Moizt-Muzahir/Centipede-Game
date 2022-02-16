/*
 * Mushroom.cpp
 *
 *  Created on: May 4, 2019
 *      Author: moiz
 */

#include "Mushroom.h"

Mushroom::Mushroom(const int& x,const int &y,Gameinfo& b):GameObject(x,y){
	this->b=&b;
	Hp=2;// TODO Auto-generated constructor stub
}
bool Mushroom::setMushroom(){
	if ((b->board_array[position.getY()-1][position.getX()-1])==0){
		b->board_array[position.getY()-1][position.getX()-1]=1;
		b->board_objects[position.getY()-1][position.getX()-1]=new Mushroom(*this);
		Mushroomset=true;
		return 1;
	}
	Mushroomset=false;
	return 0;

}
void Mushroom::collision(){
	Hp--;
}
Mushroom::~Mushroom() {
	
		// TODO Auto-generated destructor stub
}
void Mushroom::draw(){
	if (Hp==2){
		DrawTriangle( position.getX()*10,position.getY()*10,(position.getX()+1)*10,position.getY()*10 ,((position.getX()*10)+(position.getX()+1)*10)/2,(position.getY()+1)*10, colors[MISTY_ROSE] );
	}
	if (Hp==1){
		DrawRectangle(position.getX()*10, position.getY()*10, 10, 10, colors[RED]);
	}
}
