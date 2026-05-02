#ifndef FIELD_HPP
#define FIELD_HPP

int check_box(int x, int y){
    if(mines_pos[x][y] == 0) return 0;
    else if(mines_pos[x][y] == 1) return 1;
    else return -1;
}

int open_box(int x, int y){
    if(check_box(x, y) == 0){
        user_visible[x][y] = '0';

        if(check_box(x - 1, y) == 0) user_visible[x - 1][y] = '0';
        else if(check_box(x - 1, y) == 1) user_visible[x - 1][y] = '*';

        if(check_box(x + 1, y) == 0) user_visible[x + 1][y] = '0';
        else if(check_box(x + 1, y) == 1) user_visible[x + 1][y] = '*';

        if(check_box(x, y - 1) == 0) user_visible[x][y - 1] = '0';
        else if(check_box(x, y - 1) == 1) user_visible[x][y - 1] = '*';

        if(check_box(x, y + 1) == 0) user_visible[x][y + 1] = '0';
        else if(check_box(x, y + 1) == 1) user_visible[x][y + 1] = '*';

        return 0;
    }
    else{
        user_visible[x][y] = '*';
        return 1;
    }
}

void print_field(){
    for(int y = 0; y < 19; y++) {
        for(int x = 0; x < 19; x++){
            std::cout << user_visible[x][y];
        }
        std::cout << "\n";
    }
}

#endif //FIELD_HPP