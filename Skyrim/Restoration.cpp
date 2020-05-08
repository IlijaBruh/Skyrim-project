#include "Restoration.h"
#include <iostream>
#include "Spell.h"

using namespace std;

Restoration::Restoration(int heal, Spell hs)
: healing(heal), healingSpell(hs)
{
}

void Restoration::printRestoration(){
    healingSpell.printSpell();
    cout << "and heals you for:" << healing;
}
