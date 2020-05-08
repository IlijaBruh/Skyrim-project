#include "Spell.h"
#include <iostream>

using namespace std;

Spell::Spell(string n, int dr)
{
    sName = n;
    sDrain = dr;
}

void Spell :: printSpell(){
    cout << "Spell:" << sName << "costs:" << sDrain << "Mana" ;
}
