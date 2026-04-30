#ifndef MINES_CPP
#define MINES_CPP

void generate_mines(){
    for(int y = 0; i < 20; y++){
        for(int x = 0; x < 20; x++){
            mines_pos[x][y] = rand() % 2;
            user_visible[x][y] = '#';
        }
    }
}


#endif //MINES_CPP