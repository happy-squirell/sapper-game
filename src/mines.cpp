#ifndef MINES_CPP
#define MINES_CPP

#include"../headers/mines.hpp"
#include<iostream>

char user_visible[19][19];
int mines_pos[19][19];

void generate_mines(){
    for(int y = 0; y < 20; y++){
        for(int x = 0; x < 20; x++){
            mines_pos[x][y] = rand() % 2;
            user_visible[x][y] = '#';
        }
    }
}

#endif //MINES_CPP