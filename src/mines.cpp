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

void endgame_showing(){
    for (int x = 0; x < 20; x++){
        for(int y = 0; y < 20; y++){
            if(mines_pos[x][y] == 1 && user_visible[x][y] == '#') user_visible[x][y] = '*';
            else if(mines_pos[x][y] == 0 && user_visible[x][y] == '#') user_visible[x][y] = '0';
        }
    }
}

int winner(){
    int counter = 0;
    for(int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            if(user_visible[x][y] != '#' && user_visible[x][y] == 0) counter++;
        }
    }

    if(counter == 400) return 0;
    return 1;
}

#endif //MINES_CPP