//
// Created by JAD on 18/04/2023.
//

#ifndef KATAFANTASY_JOB_H
#define KATAFANTASY_JOB_H
typedef enum Job {
    WARRIOR, MAGE, PRIEST, ARCHER
} Job;

char* jobToString(Job job);

#endif //KATAFANTASY_JOB_H
