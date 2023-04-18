//
// Created by JAD on 18/04/2023.
//

#include "race.h"

char* raceToString(Race race) {
    switch (race) {
        case HUMAN:
            return "Human";
        case ELF:
            return "Elf";
        case DWARF:
            return "Dwarf";
        case ORC:
            return "Orc";
        default:
            return "Unknown race";
    }
}
