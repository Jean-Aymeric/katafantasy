cmake_minimum_required(VERSION 3.25)
project(katafantasy C)

set(CMAKE_C_STANDARD 99)

add_executable(katafantasy main.c character.c character.h dice.c dice.h characteristic.c characteristic.h race.c race.h job.c job.h team.c team.h)
