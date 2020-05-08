#ifndef SWORD_H
#define SWORD_H
#include <iostream>
#include "Item.h"

using namespace std;

class Sword : Item
{
    private:
        string type;
        int range;
        int attackSpeed;

    public:
        void setType(int ty){
            switch(ty){
                case 1:
                    type = "Dagger";
                    range = 100;
                    attackSpeed = 25;
                    break;

                case 2:
                    type = "Short Sword";
                    range = 150;
                    attackSpeed = 30;
                    break;

                case 3:
                    type = "Sword";
                    range = 200;
                    attackSpeed = 50;
                    break;

                case 4:
                    type = "Long Sword";
                    range = 250;
                    attackSpeed = 75;
                    break;

                case 5:
                    type = "Great Sword";
                    range = 225;
                    attackSpeed = 90;
                    break;
            }
        }

        string getType(){
            return type;
        }
        int getRange(){
            return range;
        }
        int getAttackSpeed(){
            return attackSpeed;
        }
};

#endif // SWORD_H
