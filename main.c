#include <stdio.h>
#include "character.h"

int main() {
    Character* jad = makeCharacter("JAD The Mighty", HUMAN, WARRIOR);
    displayCharacter(jad);
    return 0;
}
