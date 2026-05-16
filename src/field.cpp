#ifndef FIELD_HPP
#define FIELD_HPP

#include"../headers/field.hpp"
#include"../headers/mines.hpp" //только из-за массивов
#include "iostream"

void open_box(int x, int y){

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