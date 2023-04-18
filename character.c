//
// Created by JAD on 18/04/2023.
//

#include "character.h"
Character* createCharacter();
void initializeCharacter(Character* character, char name[MAX_CHARACTER_NAME], Race race, Job job);
void initializeCharacterCharacteristics(Character* character);

Character* makeCharacter(char name[MAX_CHARACTER_NAME], Race race, Job job) {
    Character* newCharacter = createCharacter();
    initializeCharacter(newCharacter, name, race, job);
    return newCharacter;
}

Character* createCharacter() {
    return (Character*) malloc(sizeof (Character));
}

void initializeCharacter(Character* character, char name[MAX_CHARACTER_NAME], Race race, Job job) {
    strcpy_s(character->name, MAX_CHARACTER_NAME, name);
    character->level = 1;
    character->job = job;
    character->race = race;
    initializeCharacterCharacteristics(character);
}

void initializeCharacterCharacteristics(Character* character) {
    for (unsigned int i = 0; i < CHARACTERISTICS_COUNT; i++) {
        character->characteristics[i] = rollD6(3);
    }
}

void displayCharacter(Character* character) {
    printf("%s %s %s level : %d\n",
           character->name,
           raceToString(character->race),
           jobToString(character->job),
           character->level);
    for (unsigned int i = 0; i < CHARACTERISTICS_COUNT; i++) {
        printf("\t%s: %d\n", characteristicToString(i), character->characteristics[i]);
    }
}
