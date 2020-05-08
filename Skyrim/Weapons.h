#ifndef WEAPONS_H
#define WEAPONS_H
#include <iostream>
#include "Item.h"

using namespace std;

class Weapons : Item
{
    private:
        int attackSpeed;
        int range;

    public:
        void setAttackSpeed(int as){
            attackSpeed = as;
        }
        void setRange(int ra){
            range = ra;
        }

        int getAttackSpeed(){
            return attackSpeed;
        }
        int getRange(){
            return range;
        }
};

#endif // WEAPONS_H
