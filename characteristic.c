//
// Created by JAD on 18/04/2023.
//

#include "characteristic.h"

char *characteristicToString(Characteristic characteristic) {
    switch (characteristic) {
        case FORCE:
            return "Force";
        case DEXTERITY:
            return "Dexterity";
        case WISDOM:
            return "Wisdom";
        case CHARISMA:
            return "Charisma";
        case STAMINA:
            return "Stamina";
        case INTELLIGENCE:
            return "Intelligence";
        default:
            return "Unknown characteristic";
    }
}