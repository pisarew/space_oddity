//
// Created by Глеб Писарев on 25.07.2022.
//

#ifndef SPACE_ODDITY_SPACE_OBJECTS_H
#define SPACE_ODDITY_SPACE_OBJECTS_H

#define SPACESHIP_COUNT 11
#define  ENEMY_COUNT 6

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

#define GAME_LOGO ",---.                                            ,--.   ,--.,--.  ,--.\n'   .-'  ,---.  ,--,--. ,---. ,---.      ,---.  ,-|  | ,-|  |`--',-'  '-.,--. ,--.\n`.  `-. | .-. |' ,-.  || .--'| .-. :    | .-. |' .-. |' .-. |,--.'-.  .-' \\  '  /\n.-'    || '-' '\\ '-'  |\\ `--.\\   --.    ' '-' '\\ `-' |\\ `-' ||  |  |  |    \\   '\n`-----' |  |-'  `--`--' `---' `----'     `---'  `---'  `---' `--'  `--'  .-'  /\n        `--'                                                             `---'"
/***
 *
 *     ,---.                                            ,--.   ,--.,--.  ,--.
 *    '   .-'  ,---.  ,--,--. ,---. ,---.      ,---.  ,-|  | ,-|  |`--',-'  '-.,--. ,--.
 *    `.  `-. | .-. |' ,-.  || .--'| .-. :    | .-. |' .-. |' .-. |,--.'-.  .-' \  '  /
 *    .-'    || '-' '\ '-'  |\ `--.\   --.    ' '-' '\ `-' |\ `-' ||  |  |  |    \   '
 *    `-----' |  |-'  `--`--' `---' `----'     `---'  `---'  `---' `--'  `--'  .-'  /
 *            `--'                                                             `---'
 */
#define GAME_RULE "\n\n\n\t\t\tA, D - spaceship control \n\n\t\t\tSPACE - fire \n\n\t\t\tQ- quit \n\n\t\t\tPRESS THE BUTTON TO START"