//
// Created by JAD on 18/04/2023.
//

#ifndef KATAFANTASY_TEAM_H
#define KATAFANTASY_TEAM_H

#include "character.h"

#define MAX_TEAM_NAME 100

typedef struct Member {
    Character *value;
    struct Member *next;
} Member;

typedef struct Team {
    char name[MAX_TEAM_NAME];
    Member *first;
} Team;

Team* createTeam(char name[MAX_TEAM_NAME]);
void addCharacterToTeam(Team *team, Character *character);
unsigned int getMembersCount(Team *team);
unsigned int isCharacterInTeam(Team *team, Character *character);
void removeCharacterFromTeam(Team *team, Character *character);
void displayTeam(Team *team);

#endif //KATAFANTASY_TEAM_H
