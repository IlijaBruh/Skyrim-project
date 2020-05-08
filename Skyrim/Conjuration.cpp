#include "Conjuration.h"
#include <iostream>
#include "Spell.h"

using namespace std;

Conjuration::Conjuration(string su, Spell cs)
:summon(su), conjurationSpell(cs)
{

}

void Conjuration::printConjuration(){
    conjurationSpell.printSpell();
    cout << "and you summoned" << summon;
}
