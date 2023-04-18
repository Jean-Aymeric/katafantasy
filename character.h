//
// Created by JAD on 18/04/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "characteristic.h"
#include "race.h"
#include "job.h"
#include "dice.h"

#ifndef KATAFANTASY_CHARACTER_H
#define KATAFANTASY_CHARACTER_H
#define MAX_CHARACTER_NAME 100

typedef struct Character {
    char name[MAX_CHARACTER_NAME];
    unsigned int level;
    unsigned int characteristics[CHARACTERISTICS_COUNT];
    Race race;
    Job job;
} Character;

Character* makeCharacter(char name[MAX_CHARACTER_NAME], Race race, Job job);

void displayCharacter(Character* character);
#endif //KATAFANTASY_CHARACTER_H
