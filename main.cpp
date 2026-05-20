#include"headers/mines.hpp"
#include"headers/field.hpp"
#include<unistd.h>
#include<iostream>

int main(){
    while(true){
        srand(time(NULL));
        generate_mines();

        while(true){
            print_field();
            int x = 0, y = 0;

            std::cout << "Введите координаты по X и Y (0 <= X и Y <= 19):\n";
            std::cin >> x;
            std::cin >> y;

            if(x < 0 || y < 0){
                std::cout << "Координаты не могут быть меньше 0.\n";
                sleep(3);
                break;
            }
            else if(x > 19 || y > 19){
                std::cout << "Координаты не могут быть больше 19.\n";
                sleep(2);
                break;
            }

            if(open_box(x, y)){
                field_clear();
                endgame_showing();

                print_field();
                std::cout << "Вы наступили на мину, игра окончена!\nНачинаю заново через 2 секунды.\n";
                sleep(2);
                break;
            }
            else if(winner()){
                field_clear();
                printf_field();

                std::cout << "Вы выиграли!\nНаслаждайтесь 2 секунды и я запущу новую игру.\n";
                sleep(2);
                break;
            }
        }


    }
}