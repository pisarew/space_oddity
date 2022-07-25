//
// Created by Глеб Писарев on 25.07.2022.
//

#ifndef SPACE_ODDITY_SPACE_OBJECTS_H
#define SPACE_ODDITY_SPACE_OBJECTS_H

typedef struct Coord {
    int x;
    int y;
} Coord;
typedef struct Pixel {
    int x;
    int y;
    char symbol;
} Pixel;

void create_spaceship(Coord current, Pixel* spaceship);

#endif //SPACE_ODDITY_SPACE_OBJECTS_H

