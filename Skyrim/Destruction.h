#ifndef DESTRUCTION_H
#define DESTRUCTION_H
#include <iostream>
#include "Spell.h"

using namespace std;

class Destruction
{
    private:
        int dmg;
        Spell destructionSpell;

    public:
        Destruction(int dm, Spell ds);
        void printDestruction();
};

#endif // DESTRUCTION_H
