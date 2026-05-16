#include"headers/mines.hpp"
#include"headers/field.hpp"
#include<unistd.h>
#include<iostream>

int main(){
    while(true){
        srand(time(NULL));
        generate_mines();
        while(true){
            int x = 0, y = 0;
            print_field();
            std::cout << "Введите координаты по X и Y: ";
            std::cin >> x >> y;

            if(x > 19 || y > 19){
                std::cout << "Введено неверное значение координат(> 19)\n";
                break;
            }
            else if(x < 0 || y < 0){
                std::cout << "Введено неверное значениие координат(< 0)\n";
                break;
            }

            if(mines_pos[x][y] == 1){
                std::cout << "Вы попали на мину! Игра окончена.\n";
                sleep(3);
                system(clear);
                break;
            }

            system(clear);

            open_box(x, y);

            int counter = 400;
            for(int i = 0; i < 20; i++){
                for(int j = 0; j < 20; j++){
                    if(user_visible[j][i] != '#') counter--;

                    if(counter == 0){
                        std::cout << "Поздравляем с победой!\n";
                        sleep(5);
                    }
                }
            }


        }
    }
}