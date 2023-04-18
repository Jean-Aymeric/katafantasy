//
// Created by JAD on 18/04/2023.
//

#include "dice.h"

unsigned int rollDice(const unsigned int nbSides) {
    unsigned short static srandIsAlreadyLaunch = 0;
    if (srandIsAlreadyLaunch == 0) {
        srand(time(NULL));
        srandIsAlreadyLaunch = 1;
    }
    return rand() % nbSides + 1;
}

unsigned int rollD6(const unsigned int nbDices) {
    unsigned int rollResult = 0;
    for (unsigned int i = 0; i < nbDices; i++) {
        rollResult += rollDice(6);
    }
    return rollResult;
}