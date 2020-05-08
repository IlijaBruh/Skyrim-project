#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include "Item.h"

using namespace std;

class Armor : Item
{
    private:
        int armor;
        string type;

    public:

        void setArmor(int ar){
            armor = ar;
        }
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Light";
                    break;

                case 2:
                    type = "Normal";
                    break;

                case 3:
                    type = "Heavy";
                    break;
            }
        }

        int getArmor(){
            return armor;
        }
        string getType(){
            return type;
        }
};

#endif // ARMOR_H
