#ifndef JEWELRY_H
#define JEWELRY_H
#include <iostream>
#include "Item.h"

using namespace std;

class Jewelry : Item
{
    private:
        string enchantement;
        string type;

    public:
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Ring";
                    break;

                case 2:
                    type = "Necklaces";
                    break;

                case 3:
                    type = "Tiara";
                    break;
            }
        }
        void setEnchantement(int en){
            switch(en){

                case 1:
                    enchantement = "Magicka Regen";
                    break;

                case 2:
                    enchantement = "Stamina Regen";
                    break;

                case 3:
                    enchantement = "Magicka Regen";
                    break;

                case 4:
                    enchantement = "Health Regen";
                    break;

                case 5:
                    enchantement = "Health";
                    break;

                case 6:
                    enchantement = "Stamina";
                    break;

                case 7:
                    enchantement = "Magicka";
                    break;

                case 8:
                    enchantement = "Resist Disease";
                    break;

                case 9:
                    enchantement = "Resist Fire";
                    break;

                case 10:
                    enchantement = "Resist Frost";
                    break;

                case 11:
                    enchantement = "Resist Magic";
                    break;

                case 12:
                    enchantement = "Resist Poison";
                    break;

                case 13:
                    enchantement = "Resist Shock";
                    break;

                case 14:
                    enchantement = "Water Breathing";
                    break;
            }
        }

        string getType(){
            return type;
        }
        string getEnchatment(){
            return enchantement;
        }
};

#endif // JEWELRY_H
