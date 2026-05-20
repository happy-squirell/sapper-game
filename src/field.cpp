#ifndef FIELD_HPP
#define FIELD_HPP

#include"../headers/field.hpp"
#include"../headers/mines.hpp" //только из-за массивов
#include "iostream"

int open_box(int x, int y){
    int idk = 0;
    for(int dx = -1; dx <= 1; dx++){
        for(int dy = -1; dy <= 1; dy++){
            if(dx == 0 && dy == 0) continue;
            int nx = dx + x, ny = y + dy;
            if(nx >= 0 && nx < 20 && ny >= 0 && ny < 20 && mines_pos[nx][ny] == 1) idk++;
            return idk;
        }
    }
}

void print_field(){
    for(int y = 0; y < 20; y++) {
        for(int x = 0; x < 20; x++){
            std::cout << user_visible[x][y];
        }
        std::cout << "\n";
    }
}

void field_clear(){
    #ifdef _WIN32
        system("cls"); // виднувсятники как обычно в своём репертуаре
    #else
        system("clear"); // ровные ребята (как мои извилины)
    #endif
}

#endif //FIELD_HPP