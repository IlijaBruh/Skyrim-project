#ifndef RESTORATION_H
#define RESTORATION_H
#include <iostream>
#include "Spell.h"

using namespace std;

class Restoration
{
    private:
        int healing;
        Spell healingSpell;

    public:
        Restoration(int heal, Spell hs);
        void printRestoration();

};

#endif // RESTORATION_H
