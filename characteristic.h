//
// Created by JAD on 18/04/2023.
//

#ifndef KATAFANTASY_CHARACTERISTIC_H
#define KATAFANTASY_CHARACTERISTIC_H
#define CHARACTERISTICS_COUNT 6

typedef enum Characteristic {
    FORCE, DEXTERITY, WISDOM, CHARISMA, STAMINA, INTELLIGENCE
} Characteristic;

char* characteristicToString(Characteristic characteristic);

#endif //KATAFANTASY_CHARACTERISTIC_H
