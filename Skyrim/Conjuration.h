#ifndef CONJURATION_H
#define CONJURATION_H
#include <iostream>
#include "Spell.h"

using namespace std;

class Conjuration
{
    private:
     string summon;
     Spell conjurationSpell;

    public:
        Conjuration(string su, Spell cs);
        void printConjuration();
};

#endif // CONJURATION_H
