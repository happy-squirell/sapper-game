#ifndef FIELD_HPP
#define FIELD_HPP

#include"field.hpp"

int open_box(int x, int y){

    if(mines_pos[x][y] == 0) user_visible[x][y] = '0';
    else user_visible[x][y] = '*';

    if(mines_pos[x][y] == 0){
        for(int ax = -1; ax <= 1; ax++){
            for(int ay = -1; ay <= 1; ay++){
                if(ax == 0 && ay == 0) continue;

                open_box(x + ax, y + ay);
            }
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

#endif //FIELD_HPP