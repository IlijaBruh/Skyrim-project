#include "Destruction.h"
#include <iostream>
#include "Spell.h"

using namespace std;

Destruction::Destruction(int dm, Spell ds)
:dmg(dm), destructionSpell(ds)
{
}

void Destruction::printDestruction(){
    destructionSpell.printSpell();
    cout << "and does" << dmg << "dmg";
}
