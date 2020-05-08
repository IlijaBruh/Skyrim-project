#ifndef SPELL_H
#define SPELL_H
#include <iostream>

using namespace std;

class Spell
{
    private:
        string sName;
        int sDrain;

    public:

        Spell(string n, int dr);

        void printSpell();

};

#endif // SPELL_H
