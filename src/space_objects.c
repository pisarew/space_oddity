//
// Created by Глеб Писарев on 25.07.2022.
//

#include "space_objects.h"

void create_spaceship(Coord current, Pixel* spaceship) {
    spaceship[0].x = current.x - 2;
    spaceship[0].y = current.y - 1;
    spaceship[0].symbol = '.';

    spaceship[1].x = current.x - 2;
    spaceship[1].y = current.y;
    spaceship[1].symbol = '\'';

    spaceship[2].x = current.x - 2;
    spaceship[2].y = current.y + 1;
    spaceship[2].symbol = '.';

    spaceship[3].x = current.x - 1;
    spaceship[3].y = current.y - 1;
    spaceship[3].symbol = '|';

    spaceship[4].x = current.x - 1;
    spaceship[4].y = current.y;
    spaceship[4].symbol = 'o';

    spaceship[5].x = current.x - 1;
    spaceship[5].y = current.y + 1;
    spaceship[5].symbol = '|';

    spaceship[6].x = current.x;
    spaceship[6].y = current.y - 2;
    spaceship[6].symbol = '.';

    spaceship[7].x = current.x;
    spaceship[7].y = current.y - 1;
    spaceship[7].symbol = '\'';

    spaceship[8].x = current.x;
    spaceship[8].y = current.y;
    spaceship[8].symbol = 'o';

    spaceship[9].x = current.x;
    spaceship[9].y = current.y + 1;
    spaceship[9].symbol = '\'';

    spaceship[10].x = current.x;
    spaceship[10].y = current.y + 2;
    spaceship[10].symbol = '.';
}
/*
 * |""|
 *  \/
 */
void create_enemy_spaceship(Coord current, Pixel* spaceship) {
    spaceship[0].x = current.x - 1;
    spaceship[0].y = current.y - 1;
    spaceship[0].symbol = '|';

    spaceship[1].x = current.x - 1;
    spaceship[1].y = current.y;
    spaceship[1].symbol = '\"';

    spaceship[2].x = current.x - 1;
    spaceship[2].y = current.y + 1;
    spaceship[2].symbol = '\"';

    spaceship[3].x = current.x - 1;
    spaceship[3].y = current.y + 2;
    spaceship[3].symbol = '|';

    spaceship[4].x = current.x;
    spaceship[4].y = current.y;
    spaceship[4].symbol = '\\';

    spaceship[5].x = current.x;
    spaceship[5].y = current.y + 1;
    spaceship[5].symbol = '/';
}