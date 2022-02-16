/*
 * Gameinfo.cpp
 *
 *  Created on: May 5, 2019
 *      Author: moiz
 */

#include "Gameinfo.h"

Gameinfo::Gameinfo() {
	for(int i=0;i<60;i++){
		for(int j=0; j<60; j++){
			board_array[i][j]=0;
			board_objects[i][j]=NULL;
			Board_Movable[i][j]=NULL;
		}
	}
	Myplayer=new Player(*this);
}

Gameinfo::~Gameinfo() {
	cout<<"Delete";
	for(int i=0;i<60;i++){
			for(int j=0; j<60; j++){
				if(board_objects[i][j]!=NULL)
				delete board_objects[i][j];
			}
		}
	delete Myplayer;
	// TODO Auto-generated destructor stub
}
void Gameinfo::Draw(){
	cout<<"Drawing\n";
	if(board_objects[58][33]!=NULL)
		cout<<"NULL" <<"\n";
	for(int i=0;i<60;i++){
			for(int j=0; j<60; j++){
				//cout<<i<<"   "<<j<<"\n";
				switch (board_array[i][j]){
				case 0:
					break;
				default:
					board_objects[i][j]->draw();
				}
			}
	}
}

