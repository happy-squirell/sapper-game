#ifndef MINES_HPP
#define MINES_HPP

// для rand() 
#include<cstdlib>

// для рандомной генерации мин
#include<ctime>
#include<cstdlib>

extern char user_visible[19][19]; //видимые пользователем клетки
extern int mines_pos[19][19]; //фактическое расположение мин

void generate_mines(); //для генерации мин

#endif //MINES_HPP