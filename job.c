//
// Created by JAD on 18/04/2023.
//

#include "job.h"

char* jobToString(Job job) {
    switch (job) {
        case WARRIOR:
            return "Warrior";
        case MAGE:
            return "Mage";
        case PRIEST:
            return "Priest";
        case ARCHER:
            return "Archer";
        default:
            return "Unknown job";
    }
}
