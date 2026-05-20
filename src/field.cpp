#ifndef FIELD_HPP
#define FIELD_HPP

#include"../headers/field.hpp"
#include"../headers/mines.hpp" //только из-за массивов
#include "iostream"

int open_box(int x, int y){
    if(mines_pos[x][y] == 1) return 1; // мина

    user_visible[x][y] = '0';

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
}

void print_field(){
    for(int y = 0; y < 20; y++) {
        for(int x = 0; x < 20; x++){
            std::cout << user_visible[x][y];
        }
        std::cout << "\n";
    }
}

#endif //FIELD_HPP